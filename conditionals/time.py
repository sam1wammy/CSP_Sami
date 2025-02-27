#samantha naranjo, time of day py
import time

#find the first instance of time in programming

first_time = time.gmtime()
#print(first_time) # type: ignore

#current time in seconds
current = time.time()
#print(current) #seconds since jan 1 1970

#cirrent date and time we see it normally
now = time.ctime(current)
#print(now)

#get just a part of the time
local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_wday #military time (0-23)
print(hour)