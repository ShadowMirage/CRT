print("Enter a number: ", end="")
n = int(input())
sum = 0
for i in range(1, n + 1):
  sum += i
print(f"Sum of numbers from 1 to {n} is {sum}")
