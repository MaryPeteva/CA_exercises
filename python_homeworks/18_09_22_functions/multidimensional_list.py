"""
**5. Write a function that accepts multidimensional list and prints out list elements nested by
their dimension:
Example: [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
1, 2
     3, 4
     6


     3, 4, 5

Hint: You may, or you may not use recursion
"""


def print_nested_list(mult_list, indent=0):
    # close to the truth as it can get
    for sub_list in mult_list:
        if bool(sub_list):
            if isinstance(sub_list, list):
                print()
                # indent += 1
                print_nested_list(sub_list, indent + 1)
            else:
                print('*' * indent, f'{sub_list}, ', end='')
        else:
            print()
            continue


multy_list = [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
print_nested_list(multy_list)

