//samantha naranjo, name decore
#include <stdio.h>  
#include <string.h>
  
int main() {  
    char name[50];   
    char message[100]; 
  
    printf("What is your name:");     
    scanf("%s", name);   
  
    strcpy(message, "<3 "); 
    strcat(message, name);    
    strcat(message, " <<3\n"); 
      
    printf("%s", message);
  
    return 0;  
}  
