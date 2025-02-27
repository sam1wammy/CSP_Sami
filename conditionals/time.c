//samantha naranjo, getting the time
#include <stdio.h>
#include <time.h>

int main(void){
   time_t seconds
   seconds = time(NULL);
   printf("seconds since jan 1, 1970 = %d\n", seconds);

   //current time 
   time_t rawtime;
   struct tm * timeinfo

   //time(&rawtime);
   //timeinfo = localtime(&rawtime);
  //printf("current time and date us %s\n ", asctime(timeinfo));
   
   //curent hour
    time_t now = time(NULL);
    
    struct tim * tm_struct = localtime (&now);
    int hour = tm_struct->tm_hour;
    printf("%d\n", hour);

   return 0;

}