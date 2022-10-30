import csv
import os.path
from pprint import pprint
from random import randint
from statistics import fmean
from settings.testing import INPUT_DIR
import matplotlib.pyplot as plt
import numpy as np

MIN_SCORE = 80
MAX_SCORE = 100
MAX_RETAKE = 3


def print_plot(orig_score, ret_score):

    orig_score.sort(reverse=False)
    np_orig = np.array(original_score)
    ret_score.sort(reverse=False)
    np_ret = np.array(ret_score)
    fig, ax1 = plt.subplots()
    color = 'tab:red'
    ax1.set_ylabel('ORIGINAL SCORE', color=color)
    ax1.plot(np_orig, color=color)
    ax1.tick_params(axis='y', labelcolor=color)
    ax2 = ax1.twinx()
    color = 'tab:blue'
    ax2.set_ylabel('RETAKE SESSION', color=color)
    ax2.plot(np_ret, color=color)
    ax2.tick_params(axis='y', labelcolor=color)
    # plt.xlabel('Students') doesn't work????
    plt.title('Students Data')
    plt.grid(True)
    plt.show()


def get_students_data():
    with open(os.path.join(INPUT_DIR, "students_exams.csv"), "r") as source:
        reader = csv.reader(source)
        students_data_in = {}
        i_key = 1
        for student_id, exam, points in reader:
            if student_id == 'student':
                continue
            student_data = students_data_in.setdefault(
                i_key,
                {
                    'student_id': student_id,
                    'exams': {},
                    'avg': 0,
                    'is_pass': False
                },
            )
            student_data['exams'][exam] = int(points)
            if i_key < 280:
                i_key += 1
            else:
                i_key = 1

    return students_data_in


students_data = get_students_data()


def sum_average(data):

    for student_avg in data:
        points = data[student_avg]['exams'].values()
        data[student_avg].update({'avg': fmean(points)})
        if int(data[student_avg]['avg']) >= MIN_SCORE:
            data[student_avg]['is_pass'] = True

    return data


students_data = sum_average(students_data)
original_score = []
for student in students_data:
    original_score.append(students_data[student]['avg'])


def random_exam_points():
    random_points = {}
    for exam in range(10):
        random_points[exam] = randint(75, MAX_SCORE)
    return random_points


def retake_exam(data):

    for student_re in data:
        if not data[student_re]['is_pass']:
            for retake in range(MAX_RETAKE):
                data[student_re]['exams'] = random_exam_points()
                if int(data[student_re]['avg']) >= 80:
                    data[student_re]['is_pass'] = True
                    break
    return data


students_data = retake_exam(students_data)
students_data = sum_average(students_data)
retake_score = []
for student in students_data:
    retake_score.append(students_data[student]['avg'])

print_plot(original_score, retake_score)
pprint(students_data)
