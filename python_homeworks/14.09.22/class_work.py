# from datetime import date
#
#
# class Person:
#
#     # GENDER_OPTION = ('female', 'male')
#     def __init__(self, age, height, weight, name):
#         # self.__gender = self.__validate_gender(gender)
#         self.age = age
#         self.height = height
#         self.weight = weight
#         self.name = name
#
#     def __str__(self):
#         return f'{self.age} {self.height} {self.weight} {self.name} {self.is_in_legal_age}'
#
#     @property
#     def is_in_legal_age(self):
#         return self.age >= 18
#
#     @staticmethod
#     def working(self):
#         if date.today().weekday() < 5:
#             return 'Is currently working'
#
#
# maria = Person(30, 180, 90, 'maria')
# print(maria, maria.working())
#
# gosho = Person(17, 170, 65, 'gosho')
# print(gosho)
import math


class Point:
    def __init__(self, x, y):
        self.y = x
        self.x = y

    def __str__(self):
        return f'{self.x} {self.y}'

    def reset(self):
        self.x = 0
        self.y = 0

    def move(self, x_out, y_out):
        self.x = x_out
        self.y = y_out

    def distance(self, point_object):
        return math.dist((self.x, self.y),(point_object.x, point_object.y))


first_point = Point(5, 4)
print(first_point)
first_point.move(8, 9)
print(first_point)
first_point.reset()
print(first_point)
second_point = Point(5, 4)
print(first_point.distance(second_point))

