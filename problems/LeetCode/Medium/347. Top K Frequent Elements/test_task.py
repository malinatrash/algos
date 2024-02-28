import unittest
from task import TopKFrequentElements


class TestTopKFrequentElements(unittest.TestCase):
    def test_top_k_frequent1(self):
        nums = [1, 1, 1, 2, 2, 3]
        k = 2
        expected_result = [1, 2]
        self.assertEqual(expected_result, TopKFrequentElements.topKFrequent(nums, k))

    def test_top_k_frequent2(self):
        nums = [1]
        k = 1
        expected_result = [1]
        self.assertEqual(expected_result, TopKFrequentElements.topKFrequent(nums, k))

    def test_top_k_frequent3(self):
        nums = [3, 0, 1, 0]
        k = 1
        expected_result = [0]
        self.assertEqual(expected_result, TopKFrequentElements.topKFrequent(nums, k))
