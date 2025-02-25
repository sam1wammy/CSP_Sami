#samantha naranjo, conditional notes py
name = input("what is your name:\n")
#What puts something inside of the “if” statement?
if name == "LaRose":
    print("Hi Ms.LaRose")
else:#this happens if the condition is false
    print(f"hello{name}!")
#What do if statements do?
#checks a condition and if it is true it will do a thing
if name == "LaRose": #<= this is the condition
    print("Hi Ms.LaRose") #<=this is what it does if true

#What are boolean statements? 
#a true or false statement
if name == "LaRose": #<= boolean statement
    print("Hi Ms.LaRose")
else:#this happens if the condition is false
    print(f"hello{name}!")

#What do else statements do?
if name == "LaRose":
    print("Hi Ms.LaRose")
else:#<= if the boolean is false, the else statment happens 
    print(f"hello{name}!")

#What kind of statement do you use if you have more than 2 needed outcomes?
num = 2
#computers read top to bottom
if num == 0:
    print("there are none.")
elif num == 1:  #everything onbetween should be elif
    print("there is one.")
elif num <4:
    print("there is a couple")
elif num < 10:
    print("there are a few")
else:#<= else always ends the conditional
    print("there are many")
#What do each of the different symbols mean in conditionals?
#< less than
#> greater than
#<= less than or equal to
#>=greater than or equal to
#== equal to
#===  *Doesn't exists in python
#! not

#What are the 3 logical operators?
if num <10 and num >5:
    print("this is a big single digit number")


elif  num <10 or >5:
    print("this is a bi single digit number ")
elif num <10 not >5:
    print("this is not a single digit number")


#What are logical operators for?
#allows the code to handle more difficult questions increases complexity

#What does a nested conditional statement do?
if num <10:
    if num ==8
    print("this prints at 8")
else:
    if num ==4 
    print("there are only enoguht cookies left for me... sorry")
    else:
        print("ther number is less than 10")
else:
    print("the number is bigger than 10")
