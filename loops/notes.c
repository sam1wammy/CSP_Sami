//samantha naranjo, loop notes in c
#include <stdio.h>

int main(void){
    //1. What is a loop? 
        //A section of code repeated multiple time
    //2. What are the two types of loops?
        //while loops
        int start  = 0;
        while(start <5){
            printf("hello!\n");
            start++;
        }
        //for loops
        int q; 
        for(q=0; q<5;q++){
            printf("%d\n", q);
        }
   //3. What is iteration
        //repeating something with minor changes each time
    //4. What are arrays(lists)? 
        //an array is a variable holding multiple values 
    //5. How do you make arrays(lists) in C? // array itme must all be the same data type
        int grades[] = {88, 97, 100, 70, 72, 99, 61};
        //1. set data type 2. AFTER naming put brackets and write the length of list 3. list is surrounded by curly brackets {} 4. commas, between each item
        //print a single item of a list
        printf("CSP grade: %d\n", grades[2]); 
        //change an item in the array
        grades[2] = 95;
        printf("CSP grade: %d\n", grades[2]); 
        //size of list in bytes
        int size = sizeof(grades);
        //lenght in list items
        int lenght = sizeof(grades)/sizeof(grades[0]);
        printf("The array is %d items long.\n", lenght);
        //arrat w/ strings
        //fisrt brackets set lenght of array
        //second brackets sets lenght of each string
        char movies[][20] = {"cars", "treasure Planet", "An american Tale", "Marley and Me", "The Avengers"};
        printf("the movies is %s!\n", movies[1]);
        int mlength = sizeof(movies)/sizeof(movies[0]);
    //6. How do you make for loops in C?
    //set the iterator, keeps track of items through the loop
        int x;    
        //in parens (starting point; ending point; what we count by)
        for(x=0;x<=10;x+=2){
            printf("%d\n", x);
    }
    int m; 
    for (m=0;m<mlength;m++){
        printf("%s\n", movies[m]);
    }
    //7. How do you make while loops in C?
    int w = 100; //start point

    while(w>=0){//stop point
        printf("%d\n", w);
        w -= 10;//what we count by
    }

    return 0;
    }