// Ternary operator.....................

#include<stdio.h>
int main(){
    int age;
    printf("Enter age :");
    scanf("%d", & age);
    age > 18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}


// Question.----  Write a program to check if a student passed or failed.
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d", & marks);
    marks >=0 && marks <=30 ? printf("Fail \n"): marks >30 && marks <=100 ? printf("pass \n"): printf("Worng number");

    return 0;
}