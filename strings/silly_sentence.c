//samantha naranjo, silly sentences in c
#include <stdio.h>  
  
int main() {  
    char animal[50];  
    char action[50];  
    char food[50];  
  
    // Get user inputs  
    printf("Enter a silly animal: ");  
    scanf("%s", animal);  
      
    printf("Enter a funny action: ");  
    scanf("%s", action);  
      
    printf("Enter a silly food: ");  
    scanf("%s", food);  
  
    // Create the story  
    printf("The %s decided to %s while eating %s!\n", animal, action, food);  
  
    return 0;  
}  
