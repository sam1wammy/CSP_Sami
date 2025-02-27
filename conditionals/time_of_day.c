//samantha naranjo, time of day c
#include <stdio.h>  
  
int main() {  
    int hour;  
    printf("What hour is it? (0-23): ");  
    scanf("%d", &hour);  
      
    if (hour < 12) {  
        printf("Good morning!\n");  
    } else if (hour >= 12 && hour < 18) {  
        printf("Good afternoon!\n");  
    } else {  
        printf("Good evening!\n");  
    }  
    
}  
