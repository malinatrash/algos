from unittest import TestCase
from D import solve


class Test(TestCase):
    def test_solve1(self):
        inp = """
            ********
            ********
            *R******
            ********
            ********
            ********
            ********
            ********
        """
        res = 49
        self.assertEqual(solve(inp), res)

    def test_solve2(self):
        inp = """
            ********
            ********
            ******B*
            ********
            ********
            ********
            ********
            ********
        """
        res = 54
        self.assertEqual(solve(inp), res)

    def test_solve3(self):
        inp = """
            ********
            *R******
            ********
            *****B**
            ********
            ********
            ********
            ********
        """
        res = 40
        self.assertEqual(solve(inp), res)

    def test_solve4(self):
        inp = """
            ********
            ***B****
            **BRB***
            ***B****
            ********
            ********
            ********
            ********
        """
        res = 41
        self.assertEqual(solve(inp), res)
