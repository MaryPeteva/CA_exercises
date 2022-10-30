from get_students_data import get_students_data


def get_top_three_students():
    # 1. Read the students_data.csv
    # 2. Collect the students data
    # 3. Return the top 3 students, ranked by current result.
    student_data = get_students_data()
    student_data_sorted = sorted(student_data, key=lambda x: x[2], reverse=True) # ok, but if we changed the score cow to 3 or 4

    return student_data_sorted[0:3] # maybe student_data[:3]


print('Top 3: ')
print(get_top_three_students()) # print can be on one line 
