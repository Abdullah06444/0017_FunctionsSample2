def isPentagonal(number):

    i = 0
    while number>0:
        number -= 1 + 3 * i
        i += 1

    if number == 0:
        return 1
    return 0


x = int(input())
while x>0:
    if isPentagonal(x):
        print(f"{x} is a pentagonal number")
    else:
        print(f"{x} is NOT a pentagonal number")
    x = int(input())

