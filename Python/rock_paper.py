import random
import time
import os

print("\n\n\n\n\t\t\tWelcome to the game.....")
time.sleep(0.6)
os.system("clear")

print("\t\tRock Paper Scissor Game\n")

while True:
	print("\nPlease select your character")
	print("\t1. Boy \n\t2. Girl")
	
	F_M = int(input("\nI choose "))
	
	if F_M == 1:
		gender = "sir"
		break
	elif F_M == 2:
		gender = "ma'am"
		break
	else:
		os.system("clear")
		print("\t\tRock Paper Scissor Game\n")
		print("\nInvalid input. Try again...\n")
		continue

name = input("\nNow, give name to your character\t")
os.system("clear")
print("\t\tRock Paper Scissor Game\n")

print(f"Hi {name} {gender}, choose any option: ")

def play():
	os.system("clear")
	round = 0
	draw = 0
	win = 0
	lose = 0
	while True:
		print("\t\tRock Paper Scissor Game\n")
		print(f"Round: {round} \nScore: {win}")
		move = ["Rock", "Paper", "Scissor"]
		bot = random.choice(move)
		
		user = input("Enter your move as follow[not case sensitive] \n1. R for Rock \n2. P for paper \n3. S for scissor \n4. Q for quit\n My move is:- ")
		userI = user.upper()
		
		if userI == "R":
			os.system("clear")
			print("\t\tRock Paper Scissor Game\n")
			print(f"\nYour\tmove:-\tRock\nMy\tmove:-\t{bot}")
			if bot == "Scissor":
				print("\n\tYou won.\n\n")
				win += 1
			elif bot == "Rock":
				print("\n\tTie.\n\n")
				draw += 1
			else:
				print("\n\tYou lose.\n\n")
				lose += 1
		
		elif userI == "P":
			os.system("clear")
			print("\t\tRock Paper Scissor Game\n")
			print(f"\nYour\tmove:-\tPaper\nMy\tmove:-\t{bot}")
			if bot == "Scissor":
				print("\n\tYou lose.\n\n")
				lose += 1
			elif bot == "Rock":
				print("\n\tYou win.\n\n")
				win += 1
			else:
				print("\n\tTie.\n\n")
				draw += 1
		
		elif userI == "S":
			os.system("clear")
			print("\t\tRock Paper Scissor Game\n")
			print(f"\nYour\tmove:-\tScissor\nMy\tmove:-\t{bot}")
			if bot == "Scissor":
				print("\n\tTie.\n\n")
				draw += 1
			elif bot == "Rock":
				print("\n\tYou lose.\n\n")
				draw += 1
			else:
				print("\n\tYou won.\n\n")
				win += 1
			
		
		elif userI == 'Q':
			quitgam(round, win, draw, lose)
			break
		else:
			os.system("clear")
			print("Invalid input!! Please try again...\n")
			continue
		round += 1

def quitgam(round, win, draw, lose):
	os.system("clear")
	print("\t\tRock Paper Scissor Game\n")
	print(f"\nRound\t{round}\nWin:\t{win}\nTie: \t{draw} \nLose:\t{lose}\n")
	print("Thanks for playing! Please do visit again.")

def help():
	os.system("clear")
	print("\t\tRock Paper Scissor Game\n")
	print("\nHelp")
	print("\nAsk random child in street, then (s)he will teach you how to play  'Rock Paper Scissor' \n\n\t\t No Offence\n\n\nChoose any option...")

def credit():
	print("\n\nI am glad to share my game with you. Thank you facebook for this help. And thanks to wikipedia also.\n\t\t\t\t\t\t\t--Sunil\n\n")

def quit():
	os.system("clear")
	print("\t\tRock Paper Scissor Game\n")
	print("Thank you for using my product.")
	print("Please do visit again.")	

while True:
	choice = input("\n 1. Play\n 2. Help\n 3. Credit\n 4. Quit\n Okay my choice is :-\t")
	choicee = int(choice)
	if choicee == 1:
		play()
		break
	elif choicee == 2:
		help()
	elif choicee == 3:
		credit()
	elif choicee == 4:
		quit()
		break
	else:
		os.system("clear")
		print("\t\tRock Paper Scissor Game\n")
		print("Invalid input. Please try again.")
		continue