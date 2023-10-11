to_add = input()

first = input()
second = input()
third = input()


def get_number(input_str):
    digits = ''.join(filter(str.isdigit, input_str))
    return digits if digits else None


to_add = get_number(to_add)
first = get_number(first)
second = get_number(second)
third = get_number(third)


def get_code(input_str):
    if len(input_str) == 10:
        # print(f'code for {input_str} – {input_str[3:]}')
        return input_str[3:]
    elif len(input_str) == 11:
        # print(f'code for {input_str} – {input_str[1:4]}')
        return input_str[1:4]
    else:
        # print(f'code for {input_str} – 495')
        return '495'


def get_numbers(input_str):
    # print(f'number for {input_str} – {input_str[-7:]}')
    return input_str[-7:]


for i in [first, second, third]:
    if get_code(i)+get_numbers(i) == get_code(to_add)+get_numbers(to_add):
        print('YES')
    else:
        print('NO')
