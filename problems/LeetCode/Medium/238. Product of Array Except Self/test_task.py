from unittest import TestCase
from task import Solution


class TestSolution(TestCase):
    def test_top_k_frequent1(self):
        nums = [1, 2, 3, 4]
        expected_result = [24, 12, 8, 6]
        self.assertEqual(expected_result, Solution.productExceptSelf(nums))

    def test_top_k_frequent2(self):
        nums = [-1, 1, 0, -3, 3]
        expected_result = [0, 0, 9, 0, 0]
        self.assertEqual(expected_result, Solution.productExceptSelf(nums))
