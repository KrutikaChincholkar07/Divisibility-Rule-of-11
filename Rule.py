num = input("Enter a number: ")

odd_sum = 0
even_sum = 0

for i in range(len(num)):
    if i % 2 == 0:
        odd_sum += int(num[i])
    else:
        even_sum += int(num[i])

if abs(odd_sum - even_sum) % 11 == 0:
    print(num, "is divisible by 11")
else:
    print(num, "is not divisible by 11")
