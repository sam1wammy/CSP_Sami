# samantha naranjo, finatial calculator

from tkinter import Variable


print("welcome user this program helps you calculate your savings ad how much you have to spend!you can only type the number!")

income = float(input("what is your income?\n"))

rent = float(input("What is your rent\n"))

utilities = float(input("what are your utilities?\n"))

gorceries = float(input("what are your groceries?\n"))

transportation = float(input("what transporation do you use?\n"))

savings = income * 0.1

spending = float(input("how much money do you spend\n"))

income_rent = rent/income*100

income_utitlities = utilities/income*100

income_groceries = gorceries/income*100

income_transportation = transportation/income *100

income_spending = spending/income *100

your_rent = print ("Your rent is $rent which is income% of your income\n")

your_utilitites = (print("your utilitites are $xx.xx which is xx% of your income\n "))
 
your_groceries = (print("your groceries are $xx.xx which is xx% of your income\n"))

your_transportation = (print("your transportation is $xx.xx which is xx% of your income\n "))

your_savings = (print("your savings are $xx.xx which is xx% of your income\n"))

your_spending = (print("your spending is $xx.xx which is xx% of your income\n"))