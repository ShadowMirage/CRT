print("Enter a number: ", end="")
n = int(input())

count = 0
for i in range(1, n + 1):
  if (i % 2 == 0):
    count += 1
print(f"Count of even numbers from 1 to {n} is {count}")