#samantha naranjo, finantial calc update py
def info(cost, income, type):
    perrent = cost/income *100
    print(f"your{type} is ${cost:.2f} which is {savings_percentage}% of your income ")

print("welcome user this program helps you calculate your savings ad how much you have to spend!you can only type the number!")

income = float(input("what is your income?\n"))

rent = float(input("What is your rent\n"))

utilities = float(input("what are your utilities?\n"))

gorceries = float(input("what are your groceries?\n"))

transportation = float(input("how much is your transporation?\n"))

savings = income * 0.1

income_rent = rent/income*100

income_utitlities = utilities/income*100

income_groceries = gorceries/income*100

income_transportation = transportation/income *100

savings_percentage = (savings / income) * 100

print(f"Your rent is ${rent:.2f} which is {income_rent:.2f}% of your income.")

print(f"Your utilities are ${utilities:.2f} which is {income_utitlities:.2f}% of your income.")

print(f"Your groceries are ${gorceries:.2f} which is {income_groceries:.2f}% of your income.")

print(f"Your transportation is ${transportation:.2f} which is {income_transportation:.2f}% of your income.")

print(f"Your savings are ${savings:.2f} which is {savings_percentage:.2f}% of your income.")

#your savings are $XX.XX which is XX% of your income. (Print)
savings_percentage = (savings / income) * 100  # Calculate savings percentage
print(f"Your savings are ${savings:.2f} which is {savings_percentage:.2f}% of your income.")

#your spendings are $XX.XX which is XX% of your income. (Print)
print(f"Your spendings are ${income/savings:.2f} which is {savings_percentage:.2f}% of your income.")