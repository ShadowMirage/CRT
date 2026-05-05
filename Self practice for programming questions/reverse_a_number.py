print("Enter a number:", end="")
n = int(input())

rev_num = 0

while n > 0:
    last_digit = n % 10
    rev_num = rev_num * 10 + last_digit
    n = n // 10

print("Reverse Number is:", rev_num)