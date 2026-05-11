print("Enter a number:", end="")
n = int(input())

total = 0

while n > 0:
    last_digit = n % 10
    total += last_digit
    n = n // 10

print("Sum of digits", total)