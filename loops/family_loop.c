//smantha Naranjo, My family loop
#include <stdio.h>  
  
int main() {  
    char* family[] = {"Alexandra", "Hugo", "Daniela", "Pamela", "Samantha"};  
    int size = sizeof(family) / sizeof(family[0]); // Get the size of the array  
  
    for (int i = 0; i < size; i++) {  
        printf("Hello %s\n", family[i]);  
    }  
  
    return 0;  
}  
