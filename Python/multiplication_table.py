upto=int(input('Enter upto multiplicant\t'))
print('')

multiplicant = 1
multiplier     = 1

for i in range (0, upto):
	for j in range (0, 10):
		
		product     = multiplicant * multiplier
		multiplier = multiplier + 1
		
	#new multiplicant after multiplier == 10
		if multiplier   == 11:
			multiplicant +=1
			multiplier        =1
		
		#display output
		print('%d' %product, end=' ')
		
		#new line after multiplier becomes 10
		if j == 9:
			print('')		