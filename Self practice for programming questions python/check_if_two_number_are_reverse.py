print("Enter the first number:", end="")
n = int(input())

print("Enter the second number:", end="")
m = int(input())

new = 0
original = n


while n > 0:
    last_digit = n % 10
    new = new * 10 + last_digit
    n = n//10

if new == m:
    print("Both numbers are reverse of each other")