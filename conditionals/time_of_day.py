#samantha naranjo, time of day py

hour = int(input("What hour is it? (0-23): "))  

if hour < 12:  
    print("good morning!")  
elif hour >= 12 and hour < 18:  
    print("good afternoon!")  
else:  
    print("good evening!")  
