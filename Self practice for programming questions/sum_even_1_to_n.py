print("Enter a number:", end="")
n=int(input())
total = 0
for i in range(1,n+1):
    if i%2 == 0:
        total += i
print(f"Sum of numbers from 1 to {n} are {total}")