print("Enter a Number:", end="")
n = int(input())

original = n
arm = 0

while n > 0:
    last_digit = n % 10
    arm = arm + last_digit ** 3
    n = n // 10

if arm == original:
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")