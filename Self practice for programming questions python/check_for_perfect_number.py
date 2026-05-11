print("Enter a Number:", end="")
n = int(input())

original = n

perfect = 0

for i in range(1,int(n**0.5)+1):
    if n % i == 0:
        if i != n:
            perfect += i
        other = n // i

        if other != i and other != n:
            perfect += other

if perfect == original:
    print("It is a perfect number")
else:
    print("Not a perfect number")