//samantha naranjo, notes
#include <stdio.h>

void due(char assigment[50], char day[20]){
    printf("The %s assigment is due %s", assigment, day); 

    return 0;
}

int main(void){
    due("Function notes", "due today");
    due("hello world update", "due tomorow");

    return 0;
}