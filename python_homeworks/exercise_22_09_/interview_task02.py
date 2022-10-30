"""
2.Write a program to create a recursive function to calculate the sum of numbers from random number to
random number (0-100).
"""


def recursive_sum(start_num, end_num):
    return end_num if start_num >= end_num else start_num + recursive_sum(start_num+1, end_num)
# I did it ^_^ :D


start = 1
end = 100
print(recursive_sum(start, end))
