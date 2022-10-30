import csv
from pprint import pprint


def get_students_data():
    with open('students_data.csv', 'r') as source:
        reader = csv.reader(source)
        student_data = []
        current_row = ['student', 'student_id', 'score', 'remaining_exams']
        for row in reader:
            if row and row != current_row:
                student_data.append(row)

    return student_data

        # Finish the function by adding code that would extract the students data from the file.
        # We only need valid students_data, i.e. from filled rows.


if __name__ == "__main__":
    pprint(get_students_data())
