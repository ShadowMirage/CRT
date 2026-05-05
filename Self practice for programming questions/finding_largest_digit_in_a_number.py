print("Enter a number:", end="")
n = int(input())

largest = 0

while n > 0:
    last_digit = n % 10
    if last_digit > largest:
        largest = last_digit
        
    n = n // 10

print(f"Largest digit is {largest}")