print("Enter a Number:", end="")
n = int(input())

original = n

reverse = 0

while n > 0:
    last_digit = n % 10
    reverse = reverse * 10 + last_digit
    n = n //10

if reverse == original:
    print(f"{original} is a palindrome")
else:
    print(f"{original} is not a palindrome")