print("Enter a Number:",  end="")
n = int(input())

smallest = 9

while n > 0:
    last_digit = n % 10
    if last_digit < smallest:
        smallest = last_digit
    n = n // 10

print(f"{smallest} is the smallest digit")