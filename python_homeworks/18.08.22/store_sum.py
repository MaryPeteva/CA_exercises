
sums_array = []
number_one = 5
number_two = 10


def store_sum(number1, number2, sums):
    """
    :param number1:
    :param number2:
    :param sums:
    :return: sums
    """
    # Write a code that stores the sum of number1 and number2 within sums_array
    sums = number1 + number2
    sums_array.append(sums)
    return sums_array


print(store_sum(number_one, number_two, sums_array))
