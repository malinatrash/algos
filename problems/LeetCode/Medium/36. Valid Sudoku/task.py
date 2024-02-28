from collections import defaultdict
from typing import List


class Solution:
    @staticmethod
    def isValidSudoku(board: List[List[str]]) -> bool:
        rows = defaultdict(set)
        cols = defaultdict(set)
        boxes = defaultdict(set)

        for i in range(9):
            for j in range(9):
                if board[i][j] == ".":
                    continue
                box_index = (i // 3, j // 3)
                if (
                        board[i][j] in cols[j] or
                        board[i][j] in rows[i] or
                        board[i][j] in boxes[box_index]
                ):
                    return False
                rows[i].add(board[i][j])
                cols[j].add(board[i][j])
                boxes[box_index].add(board[i][j])
        return True

