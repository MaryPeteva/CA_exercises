"""
7. Write a python program to find h.c.f. of two numbers

For any two numbers that are inputs given by the user, we have to calculate and print the h.c.f. of that numbers.
Case1: If the user inputs the numbers 4 and 6.


            then the output should be ‘2’.

Case2: If the user inputs the numbers 5 and 7.

            then the output should be ‘1’.
"""
import math


def find_highest_common_factor(num1, num2):
    return math.gcd(num1, num2)


num_one = int(input('Enter first number'))
num_two = int(input('Enter second number'))
print(f'Highest common factor of numbers {num_one} and {num_two} is:', find_highest_common_factor(num_one, num_two))
