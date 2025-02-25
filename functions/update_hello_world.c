//samantha naranjo, update hello world 
#include <stdio.h>  
#include <math.h>  
  
void sayhello(char name[]) {    
    printf("Hello, %s!\n", name);    
}    
  
int main(void) {  
    char name[50];  
    
    printf("Enter your name, don't lie!!: ");    
    scanf("%s", name);     
    sayhello(name);  
   
    sayhello("bob");   
    sayhello("cynthia");   
    sayhello("Sam");   
    sayhello("Lila");   
  
    return 0;    
}  