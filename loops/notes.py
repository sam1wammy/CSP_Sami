#samantha naranjo, loop notes py


#1. What is a loop? 
 #a section of code that repeats multiple times 
#2. What are the two types of loops?
#for loop
#nums = [12,3,66,7,3,3,2]

#for num in nums:
#    print(num)

#    #while loop
#x = 0

#while x < 10:
#    print(x)
#    x+=1
#3. What is iteration
 #that specific instance of the loop
 #iteration the amount of times you are looping thought  

#4. what are lists? 
 #A variable that holds multiple values

 #nums = [1,2,3,4,5,6,7,6]
siblings = ["alex","katie", "andrew", "vienna", "tia", "treyson", "xavier", "hailey"]
#print(nums) #print whole list is ugly
print(siblings[3])#print 1 itme from the list

siblings[7] = "jake"  
siblings.pop(5)
siblings.insert(1, "jayshree")
siblings.insert(2, ["joe", "noah", "zee"])
print(siblings)

#5. how do you make list in phyton?
 
#6. How do you make for loops in python? 
for sibling in siblings:
    print(siblings)
for x in range(0,101, 20):
    print(x)
#7. How do you make while loops in python?
import random
x = 1#variable to keep count of iteration
 
goose = random.randint

while x <= 20:
    if x == goose:
       print("goose!")
else:
    print("duck!")
    x+= 1

