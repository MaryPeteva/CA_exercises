array_input = [3, 5, -4, 8, 11, 1, -1, 6]
target_sum_input = 10
result = []


def get_number_sum(array, target_sum):
    """
    Example:
    array = [3, 5, -4, 8, 11, 1, -1, 6]
    target_sum = 10
    result = [-1, 11]
    :param array: Non-empty array of integers
    :param target_sum: integer
    :return: new array holding 2 numbers which sum = target_sum. If no such numbers, return []
    """

    i = 0
    j = i
    r = len(array)
    for i in range(r):
        for j in range(r):
            if i != j:
                if array[i] + array[j] == target_sum:
                    result.append(array[j])
    print(result)


get_number_sum(array_input, target_sum_input)
