import math


class Triangle:
    def __init__(self, *args):
        self.side_a = self.set_side_a(float(args[0]))
        self.side_b = self.set_side_b(float(args[1]))
        self.side_c = self.set_side_c(float(args[2]))

    @staticmethod
    def set_side_a(value):
        if 0 < value <= 20:
            return value

    @staticmethod
    def set_side_b(value):
        if 0 < value <= 20:
            return value

    @staticmethod
    def set_side_c(value):
        if 0 < value <= 20:
            return value

    def calc_perimeter(self):
        return self.side_a + self.side_b + self.side_c

    def calc_area(self):
        semi_perimeter = (self.calc_perimeter()) / 2
        area = math.sqrt(semi_perimeter * (semi_perimeter - self.side_a) * (semi_perimeter - self.side_b) * (semi_perimeter - self.side_c))
        return area


# new_tri = Triangle(3, 4, 5)
# print(new_tri.side_a, new_tri.side_b, new_tri.side_c)
# print(new_tri.calc_perimeter())
# print(new_tri.calc_area())


