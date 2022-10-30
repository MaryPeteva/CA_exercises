# def name_age(name, age):
#     print(name)
#     print(age)
#
#
# name_out = 'Gosho'
# age_out = 20
#
# name_age(name_out, age_out)
#
#
# def func1(*args):
#     for arg in args:
#         print(arg)
#     print('\n')
#
#
# print('func with diff num of arg')
# func1('a', 'b', 'v')
#
# func1(1, 2)
#
# func1(1, 'a', 2, '3', 4)
#
#
# def calculation(num_one, num_two):
#
#     return num_one + num_two, num_one - num_two
#
#
# num_one_out = 40
# num_two_out = 10
# result = calculation(num_one_out, num_two_out)
# print('calculation func with two items in return')
# print(result)
#
#
# def show_employee(name, salary=9000):
#     print(f'Name: {name}, salary: {salary}')
#
#
# name_out = 'Gosho'
# salary_out = 2000
# print('show employee')
# show_employee(name_out, salary_out)
#
#
# def bump_sum(a, b):
#
#     def calculate_sum(aa, bb):
#         return aa+bb
#
#     return calculate_sum(a, b) + 5
#
#
# a_out = 10
# b_out = 20
#
# print('bump sum')
# print(bump_sum(a_out, b_out))
#
#
# def recursive_addition(num):
#     if num >= 0:
#         return num + recursive_addition(num - 1)
#     return 0
#
#
# result = recursive_addition(10)
# print('recursive addition')
# print(result)
#
#
# def display_student(name, age):
#
#     print(name, age)
#
#
# print('display student first')
# display_student('Gosho', 15)
# print('display student func new name')
# show_student = display_student
#
# show_student('Gosho', 15)


def even_list(start, end):

    # even_nums = []
    while start <= end:

        if start % 2 == 0:
            yield start
            print(start)
            # even_nums.append(start)
        start += 1

    # for x in range(start, end+1):
    #     print(even_nums[x])


start_out = 4
end_out = 30

print('Even list')
for i in even_list(start_out, end_out):
    print(i, end='')


# def max_item(nums):
#     nums.sort(reverse=True)
#     return nums[0]
#
#
# nums_out = [0, 15, 2, 80, 100, 99, 1, 14, 11, 5, 51]
# print('max item')
# print(max_item(nums_out))

# def infinite_sequence():
#     num = 0
#     while True:
#         yield num
#         num += 1
#
#
# for i in infinite_sequence():
#     print(i, end='')
