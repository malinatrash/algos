from unittest import TestCase

from b import solve


class Test(TestCase):
    def test_solve1(self):
        m1t1, m1t2 = 0, 0
        m2t1, m2t2 = 0, 0
        m1g = 1
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 1)

    def test_solve2(self):
        m1t1, m1t2 = 0, 2
        m2t1, m2t2 = 0, 3
        m1g = 1
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 5)

    def test_solve3(self):
        m1t1, m1t2 = 0, 2
        m2t1, m2t2 = 0, 3
        m1g = 2
        print(solve(m1t1, m1t2, m2t1, m2t2, m1g))
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 6)

    def test_solve4(self):
        m1t1, m1t2 = 2, 2
        m2t1, m2t2 = 1, 1
        m1g = 2
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 0)

    def test_solve5(self):
        m1t1, m1t2 = 5, 2
        m2t1, m2t2 = 0, 5
        m1g = 1
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 3)

    def test_solve6(self):
        m1t1, m1t2 = 1, 1
        m2t1, m2t2 = 1, 4
        m1g = 1
        self.assertEqual(solve(m1t1, m1t2, m2t1, m2t2, m1g), 3)
