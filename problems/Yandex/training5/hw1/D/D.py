def cnv(y, x) -> str:
    return f"{y}{x}"


def solve(matrix):
    res = 64
    res_set = set()

    for i in range(8):
        for j in range(8):
            if matrix[i][j] == "R":
                res_set.add(cnv(i, j))
                for x in range(j + 1, 8):
                    if matrix[i][x] != "*":
                        break
                    res_set.add(cnv(i, x))
                for x in range(j - 1, -1, -1):
                    if matrix[i][x] != "*":
                        break
                    res_set.add(cnv(i, x))
                for y in range(i + 1, 8):
                    if matrix[y][j] != "*":
                        break
                    res_set.add(cnv(y, j))
                for y in range(i - 1, -1, -1):
                    if matrix[y][j] != "*":
                        break
                    res_set.add(cnv(y, j))

            elif matrix[i][j] == "B":
                res_set.add(cnv(i, j))
                for c in range(1, min(8 - i, 8 - j)):
                    if matrix[i + c][j + c] != "*":
                        break
                    res_set.add(cnv(i + c, j + c))
                c = 1
                while True:
                    if i - c < 0 or j + c > 7:
                        break
                    if matrix[i - c][j + c] != "*":
                        break
                    res_set.add(cnv(i - c, j + c))
                    c += 1
                for c in range(1, min(i, j) + 1):
                    if matrix[i - c][j - c] != "*":
                        break
                    res_set.add(cnv(i - c, j - c))
                c = 1
                while True:
                    if i + c > 7 or j - c < 0:
                        break
                    if matrix[i + c][j - c] != "*":
                        break
                    res_set.add(cnv(i + c, j - c))
                    c += 1

    return res - len(res_set)


if __name__ == "__main__":
    m = [input() for j in range(8)]
    print(solve(m))
