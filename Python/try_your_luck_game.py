import random


print('\t\tTry Your Luck Game')
token = int(input('What is your token number?\t'))

#defining the range
#you can increase or decrease range
start = token - 99999#999
end   = token + 99999#999
luck = random.randint(start, end)
loop   = 1

#If you are very unlucky, the loop will never end
while luck != token:
	print(luck, end = ' ')
	luck = random.randint(start, end)
	loop += 1

print(luck)   #Print your token number at the end
print()           #For new line,I know \n will also do
print('Your token number appers at %d round.' %loop)