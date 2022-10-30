"""
3. Write a program to iterate a given list and count the occurrence of each element and create a dictionary to
show the count of each element.
Input : [11, 45, 8, 11, 23, 45, 23, 45, 89]
Output : {11: 2, 45: 3, 8: 1, 23: 2, 89: 1}
"""


def create_dict(items):
    out_dict = {}
    for i in range(len(items)):
        if items[i] not in out_dict:
            out_dict[items[i]] = items.count(items[i])

    return out_dict


nums = [11, 45, 8, 11, 23, 45, 23, 45, 89]
print(create_dict(nums))
