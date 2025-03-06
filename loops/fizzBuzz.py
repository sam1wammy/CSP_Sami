#samantha naranjo, FizzBuzz py

for i in range(1, 51):  
    if i % 3 == 0 and i % 5 == 0:  # Check for FizzBuzz first  
        print("FizzBuzz")  
    elif i % 3 == 0:  
        print("Fizz")  
    elif i % 5 == 0:    
        print("Buzz")    
    else:  
        print(i)  
