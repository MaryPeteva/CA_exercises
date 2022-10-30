import math


def factorial_number(number):
    """
           Write a Python function to calculate the factorial of a number (a non-negative integer).
           The function accepts the number as an argument.
           Example:
           Input : 6
           Output: 720
           :param number:
           :return: n factorial
       """
    factorial = 1

    if number > 1:

        for i in range(1, number + 1):
            factorial = factorial * i

    return factorial


num = 6
print(factorial_number(num))
