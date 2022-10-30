from triangle import Triangle
import unittest


class TriangleTests(unittest.TestCase):

    def setUp(self):
        self.new_tr = Triangle(3, 4, 5)

    def test_calc_perim_succsess(self):
        self.assertAlmostEqual(self.new_tr.calc_perimeter(), 12)

    def test_calc_perim_fail(self):
        self.assertNotAlmostEqual(self.new_tr.calc_perimeter(), 10)

    def test_calc_area_succsess(self):
        self.assertAlmostEqual(self.new_tr.calc_area(), 6)

    def test_calc_area_fail(self):
        self.assertNotAlmostEqual(self.new_tr.calc_area(), 7)


if __name__ == '__main__':
    unittest.main()
