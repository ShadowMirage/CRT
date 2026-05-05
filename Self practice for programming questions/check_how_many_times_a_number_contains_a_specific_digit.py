print("Enter a number:", end="")
n = int(input())

original = n

print("Enter the specific number:", end="")
m = int(input())

count = 0

while n > 0:
    last_digit = n % 10
    if last_digit == m:
        count += 1
    n = n // 10

print(f"{m} appears {count} times in the {original}")
