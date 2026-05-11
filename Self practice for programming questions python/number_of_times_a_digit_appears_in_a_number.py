print("Enter a number:", end="")
n = int(input())

frequency = [0] * 10

while n > 0:
    last_digit = n % 10
    frequency[last_digit] += 1
    n = n // 10

for i in range(10):
    if frequency[i] > 0:
        print(f"Digit {i} appears {frequency[i]} times")
