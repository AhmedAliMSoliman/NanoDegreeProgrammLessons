# Find the greatest common denominator of two numbers
# using Euclid's algorithm


def gcd(a, b):
    while (b != 0):
        t = a       # set aside the value of a
        a = b       # set a equal to b
        b = t % b   # divide t (which is a) by b

    return a


# try out the function with a few examples
print("60, 96 : ", gcd(60, 96))  # should be 12
print(gcd(20, 8))   # should be 4
print(gcd(4, 4))   # should be 4
print(gcd(4, 8))   # should be 4
print(gcd(96, 96))   # should be 4
