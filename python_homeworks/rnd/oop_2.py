# class Person:
#     GENDER_OPTIONS = ("female", "male")
#
#     def __init__(self, gender, age, height, weight, name):
#         self.__gender = self.__validate_gender(gender)
#         self.age = age
#         self.height = height
#         self.weight = weight
#         self.name = name
#
#     def __validate_gender(self, gender):
#         if gender not in self.GENDER_OPTIONS:
#             raise ValueError(f"Gender value '{gender}' is not a valid one!")
#         return gender
#
#     def __str__(self):
#         return f"I am {self.name}"
#
#     def __repr__(self):
#         return f"Person(gender = {self.gender}, age = {self.age}, height = {self.height}, weight = {self.weight})"
#
#     @property
#     def gender(self):
#         return self.__gender
#
#     @gender.setter
#     def gender(self, value):
#         # raise TypeError('Gender value is unchangeable')
#         self.__gender = value
#
#     @classmethod
#     def create_person(cls, *args, **kwargs):
#         return cls(*args, **kwargs)
#
#     @staticmethod
#     def some_static_method(*args, **kwargs):
#         pass
#
#
# class Student(Person):
#     def __init__(self, *args, **kwargs):
#         super().__init__(*args, **kwargs)
#         self.occupation = "Student"
#         self.courses = set()
#
#     def add_course(self, course):
#         self.courses.add(course)
#
#     @classmethod
#     def create_from_person(cls, per_instance):
#         if per_instance.age < 15:
#             print(f"Cannot create a student aged less than {per_instance.age}")
#             return
#         return cls(
#             per_instance.gender,
#             per_instance.age,
#             per_instance.height,
#             per_instance.weight,
#             per_instance.name,
#         )
#
#
# person_instance = Person('female', 30, 180, 90, "Maria")
# # print(repr(person_instance), person_instance)
# student_one = Student.create_from_person(person_instance)
# # print(student_one, f"I am {student_one.occupation}")
#
#
# class YearsPassed:
#     def __init__(self, years_passed):
#         self.years_passed = years_passed
#
#     def pass_year(self):
#         self.years_passed += 1
#
#
# class BachelorStudent(Student, YearsPassed):
#     def __init__(self, gender, age, height, weight, name, years_passed):
#         Student.__init__(self, gender, age, height, weight, name)
#         YearsPassed.__init__(self, years_passed)
#
#         self.is_graduating = True
#
#
# b1 = BachelorStudent('female', 30, 180, 90, "Maria", 5)
# print(b1, b1.years_passed)
#
# b1.pass_year()
# print(b1.years_passed)

# class A:
#
#     def method(self):
#         print('A.method() called')
#
#
# class B:
#
#     def method(self):
#         print('B.method() called')
#
#
# class C(A, B):
#     pass
#
#
# class D(B, C):
#     pass
#
#
# d = D()
# d.method()
# print(D.mro())

# class DictOfShortKeys(dict):
#     MAX_KEY_LENGTH = 6
#
#     def __setitem__(self, key, value):
#         if not isinstance(key, str):
#             raise ValueError('Only string keys are accepted')
#         if len(key) > self.MAX_KEY_LENGHT:
#             raise ValueError(f'Key length limit {len(key)} > {self.MAX_KEY_LENGTH}')
#         super().__setitem__(key, value)

# class OddsOnly(list):
#     def append(self, item: int) -> None:
#         if item % 2 != 0:
#             super().append(item)
#         raise
#
#
# class EvensOnly(list):
#     def append(self, item: int) -> None:
#         if item % 2 == 0:
#             super().append(item)
#         raise ValueError('Only even ints are allowed')
#
class Chair:
    def __init__(self, person):
        self.person = person


class Table:
    def __init__(self, material, places):
        self.material = material
        self.places = places
        self._seats = {key: Chair for key in range(1, places+1)}
