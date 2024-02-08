import re

def is_valid_car_number(s):
    pattern1 = re.compile(r'^[A-Z]\d\d[A-Z]{2}$')
    pattern2 = re.compile(r'^[A-Z]\d[A-Z]{2}$')

    def is_valid_part(part):
        return pattern1.match(part) or pattern2.match(part)

    result = []
    while s:
        found = False
        for length in range(6, 3, -1):
            if is_valid_part(s[:length]):
                result.append(s[:length])
                s = s[length:]
                found = True
                break
        if not found:
            return None

    return result


t = int(input())
for i in range(0, t):
    input_str = input()
    result = is_valid_car_number(input_str)

    if result:
        print(" ".join(result))
    else:
        print("-")