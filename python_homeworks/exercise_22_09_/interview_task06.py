"""
6. Write a program to check a number is Armstrong or not in python programming language
What is Armstrong Number?
It is a number which is equal to the sum of cube of its digits.
For eg: 153, 370 etc.
Let's see it practically by calculating it,

Suppose I am taking 153 for an example

First calculate the cube of its each digits

  1^3 = (1*1*1) = 1

  5^3 = (5*5*5) = 125

  3^3= (3*3*3) = 27

Now add the cube

  1+125+27 = 153

It means 153 is an Armstrong number.

"""
import numpy as np


def get_digits(num):
    num_str = str(num)
    digits = []
    for i in range(len(num_str)):
        digits.append(int(num_str[i]))
    return digits


def armstrong_num(num):
    digits = np.array(get_digits(num))
    pow_num = len(digits)
    cube = sum(digits**pow_num)
    return True if num == cube else False


n = 153
print(armstrong_num(n))
# works with all PPDI
