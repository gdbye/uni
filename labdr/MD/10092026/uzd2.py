def digit_sum():
    x = int(input("ievadi skaitli =>"))
    temp = x
    sum = 0
    while temp > 0:
        sum += temp % 10
        temp //= 10
    return sum, x


def test(x_digit, y, z, x):
    if x_digit == abs(y - z):
        print(x)


a_digit, a = digit_sum()
b_digit, b = digit_sum()
c_digit, c = digit_sum()

test(a_digit, b, c, a)
test(b_digit, a, c, b)
test(c_digit, a, b, c)
