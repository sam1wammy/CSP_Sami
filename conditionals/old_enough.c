//samantha naranjo, Old enought assigment in c
#include <stdio.h>  
  
int main() {  
    int age;  
    printf("How old are you? ");  
    scanf("%d", &age);  
  
    if (age >= 18) {  
        printf("You can vote.\n");  
    } else if (age >= 16) {  
        printf("You can drive.\n");  
    } else if (age >= 15) {  
        printf("You can get a learner's permit.\n");  
    } else if (age >= 5) {  
        printf("You can go to school.\n");  
    } else {  
        printf("You're not old enough for any of these.\n");  
    }  
  
    return 0;  
}  
