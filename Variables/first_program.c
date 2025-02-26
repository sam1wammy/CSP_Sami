//samantha naranjo, first program c
#include <stdio.h>  
  
int main(void) {  
    char name[50]; // Array to store the user's name  
    char food[50]; // Array to store the user's favorite food  
  
    // Ask for the user's name  
    printf("What is your name? ");  
    scanf("%s", name); // Get user input for name  
  
    // Ask for the user's favorite food  
    printf("What is your favorite food? ");  
    scanf("%s", food); // Get user input for food  
  
    // Print a personalized message  
    printf("Hello, %s! Your favorite food is %s.\n", name, food);  
  
    return 0;  
}  
