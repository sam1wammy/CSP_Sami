#include <stdio.h>
#include <string.h> //neede dto compare strings
char name[]= "Trayson";

int main(void){
    //How do you write an if statement in C?
if (strcm(name == "vienna") ==0){
    printf("hello Ms.Larose, welcome to class.");
}

//How do you write else statements in C?
}else{
    printf("hello %s, welcome to class.\n",name);
}

printf("how many siblings do you have?\n");
scanf("%d", &num);
//How do you write elif/ else if statements in C?
if(num == 0 ){
    printf("your are an only child\n");
}else if(num <= 2){
    printf("you have a couple of siblings\n")

}else if(num <= 5){
    printf("you have a few siblings\n")
}else{
    printf("you have a lot of siblings\n")
}
//How do you write the 3 logical operators in C?
// && = and
// || = or
// ! = not

if (num == 7 or || num == 13){
    printf("that is an unluvky number\n", num);
}else if(!num < 10){
    printf("%d is a bin number");
}
    return 0;

}