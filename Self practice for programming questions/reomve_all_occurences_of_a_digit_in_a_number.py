print("Enter a number:", end="")
n = int(input())

print("Enter a digit to remove:", end="")
m = int(input())

result = 0
place = 1

while n > 0:
    last_digit = n % 10
    
    if last_digit != m:
        result = result + last_digit * place
        place = place * 10
        
    n = n // 10

print("Result after removal:", result)