"""
5. Write a program that check given an array of integers is monotonic or not.
A = [6, 5, 4, 4]
B = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
C = [1, 1, 2, 3, 7]
Output:
True
False
True
"""


def is_monotonic(arr):

    return (all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1)) or
            all(arr[i] >= arr[i + 1] for i in range(len(arr) - 1)))


A = [6, 5, 4, 4]
B = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
C = [1, 1, 2, 3, 7]
print('A is:', is_monotonic(A))
print('B is:', is_monotonic(B))
print('C is:', is_monotonic(C))
