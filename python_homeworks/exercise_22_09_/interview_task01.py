"""
1. Write a function that prints all duplicate items from a given list
Input: [10, 20, 30, 30, 60, 40, 30, 20, 70, 80]
Expected Output: [20,30 ]
"""


def print_dubs(num_list):
    dub_list = []
    for i in range(len(num_list)):
        if num_list.count(num_list[i]) > 1:
            if num_list[i] not in dub_list:
                dub_list.append(num_list[i])
# I really wanted to write it on one row but....
    return dub_list


input_list = [10, 20, 30, 30, 60, 40, 30, 20, 70, 80]
print(print_dubs(input_list))
