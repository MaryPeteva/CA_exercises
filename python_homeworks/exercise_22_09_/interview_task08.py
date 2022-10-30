"""
8 . Write a Python program to find l.c.m. of two numbers
For any two numbers given by the user as an input, we have to calculate and print the l.c.m. of that numbers using python programming language.
Case1: If the user inputs the numbers 4 and 6.

             then the output should be ‘12’.

Case2: If the user inputs the numbers 5 and 7.

            then the output should be ‘35’.
"""
import math
# Least Common Multiple


def find_least_common_multiple(num1, num2):
    # return math.lcm(num1, num2)) This here is UNFAIR!!!
    return (num1 * num2) // math.gcd(num1, num2)  # good we remember some good old math


num_one = int(input('Enter first number'))
num_two = int(input('Enter second number'))
print(f'Least common multiple of numbers {num_one} and {num_two} is:', find_least_common_multiple(num_one, num_two))
