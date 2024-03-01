from unittest import TestCase
from task import Solution

class TestSolution(TestCase):
    def test_decode1(self):
        expected_result = []
        s = ""
        self.assertEqual(expected_result, Solution.encode(s))


    def test_encode1(self):
        expected_result = ""
        s = []
        self.assertEqual(expected_result, Solution.encode(s))