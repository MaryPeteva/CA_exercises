# def scope_test():
#
#     def do_local():
#         spam = 'local spam'
#
#     def do_nonlocal():
#         nonlocal spam
#         spam = 'nonlocal spam'
#
#     def do_global():
#         global spam
#         spam = 'global spam'
#
#     spam = 'test spam'
#     do_local()
#     print('After local assignment:', spam)
#     do_nonlocal()
#     print('After nonlocal:', spam)
#     do_global()
#     print('After global:', spam)
#
# scope_test()
# print('In global scope:', spam)

# def minus_five(number):
#
#     return lambda number: number - 5
#
#
# minus_number = minus_five(5)
# print(minus_number(10))
# def is_odd(number):
#     if number % 2 == 0:
#         return False
#     return True
#
#
# input_num = 11
# print(is_odd(input_num))

# import re
#
#
# def covert_to_snake_case(input_string):
#
#     input_string = input_string.replace('-', '')
#     output_string = (re.sub(r'(?<!^)(?=[A-Z])', '_', input_string).lower())
#     return output_string
#
#
# def covert_to_camel_case(snake_str):
#     first, *others = snake_str.split('_')
#     return ''.join([first.lower(), *map(str.title, others)])
#
#
# string_out = 'Camel-Case-To-Snake-Case'
# # string_out = 'CamelCaseToSnakeCase'
# new_string = covert_to_snake_case(string_out)
# print('Other to snake:', new_string)
#
# new_string = covert_to_camel_case(new_string)
#
# print('Snake to camel: ', new_string)

# def on_power(number, power):
#
#     return 1 if power == 0 else number * on_power(number, power+1)
#
#
# num = 2
# power_out = 2
#
# print(on_power(num, power_out))
# def subgen(x):
#     for i in range(x):
#         yield i
#
#
# def gen(y):
#     yield from subgen(y)
#
#
# for q in gen(6):
#     print(q)
#
# import numpy as np
# nums = [1, 2, 3, 4, 5, 6]
# np_nums = np.array(nums)
# print(np_nums**2)
