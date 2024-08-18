// check age for you are adult or not .................................................................................

#include<stdio.h>
int main(){
    int age;
    printf("Enter age :");
    scanf("%d", & age);
    if(age > 18){
        printf("Adult \n");
        printf("They can drive \n");
        printf("They can vote");
    }
    else{
        printf("Not Adult \n ");
    }
    return 0;
}




// chek your grade .......................................................................................................
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d", & marks);
    if(marks >= 90){
        printf("A++ \n");
    }
    else if (marks > 80 && marks < 90 ){
        printf("A+ \n");
    }
    else if (marks > 40 && marks < 80){
        printf("A \n");
    }
    else{
        printf("you are fail ??");
    }
    return 0;
}


// Question.---->  Write a program to check if a student passed or failed. ------------------------------------


#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d", & marks);
    if(marks >=0 && marks <= 30){
        printf("Fail \n");
    } else if (marks >30 && marks<=100){
        printf("Pass \n");
    } else {
        printf("Worng number");
    }
    return 0;
}


// Question ---> Write a program to give grades to a student. ------------------------------------------------

#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d", & marks);
    if(marks < 30 && marks >=0){
        printf("C \n");
    }
    else if (marks >= 30 && marks < 70 ){
        printf("B \n");
    }
    else if (marks >= 70 && marks < 90){
        printf("A \n");
    }
    else if (marks >= 90 && marks <= 100){
        printf("A++ \n");
    }
    else{
        printf("Wrong number");
    }
    
    return 0;
}


// Question ---> Write a program to find if a character entered by user is upper case or not . ----------------

#include<stdio.h>
int main(){
    char ch;
    printf("Enter character :");
    scanf("%c", & ch);
    if(ch >='A' && ch <= 'Z'){
        printf("Upper case \n");
    } else if (ch >='a' && ch <= 'z'){
        printf("Lower case \n");
    } else {
        printf("No english letter");
    }
    return 0;
}

// QUESTION. --->  Write a program to check if a given number isArmstrong number or not.

#include<stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d", & num );

    if (num>0){
        printf("Natural number");
    }else {
        printf("No natural number ");
    }
    return 0;
}
