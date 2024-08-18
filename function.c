#include<stdio.h>
void printHello(); // function Declaration
int main(){
    printHello();  // function call 
    printHello();
    printHello();
    return 0;
}

void printHello(){  // function definination 
    printf("Hello! \n");
}

// Write 2 functions - one to print Hello and second to print  Good bye.--------------------------------------------
#include<stdio.h>
void printHello();
void printgoodbye();
int main(){
    printHello();  // function call 
    printgoodbye();
    return 0;
}
void printHello(){
    printf("Hello \n");
}
void printgoodbye(){
    printf("good bye\n");
}


// Write a function that prints Namaste if user is indian anmd Bonjour if user is french.-----------------------------
#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("Enter i for indian & f for french : ");
    scanf("%c", & ch);

    if (ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste");
}
void bonjour(){
    printf("Bonjour");
}


// table print using function --------------------------------------------------------------------------------------------------
#include<stdio.h>
void printtable(int n);
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",& n);

    printtable(n); // argument / actual parameter
    return 0;
}
void printtable(int n){ // parameter/formal parameter
    for (int i = 1; i <=10; i++){
        printf("%d \n",i*n);
    }
    
}

// sum print using function --------------------------------------------------------------------------------------------------
#include<stdio.h>
int sum(int a, int b);
int main (){
    int a, b;
    printf("enter first number : ");
    scanf("%d",& a);

    printf("enter second number : ");
    scanf("%d",& b);

    int s = sum(a,b);
    printf("sum is : %d",s);
    return 0;
}
int sum(int a, int b){
    return a+b;
}


// Use library functions to calculate the sqare the of a number given by user.------------------------------------------------------
#include<stdio.h>
#include<math.h>
int main (){
    int n = 4;
    printf("%f",pow(n,2));
    return 0;
}

// Write functions to calucalte area of sqare, a circle & a rectangle.------------------------------------------
#include<stdio.h>
#include<math.h>
float sqareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main (){
    float a = 5.0;
    float b = 10.0;
    float rad = 6.0;
    float side = 7.0;
    printf("Rectanlge area is : %f \n", rectangleArea(a,b));
    printf("Sqare area is : %f \n", sqareArea(side * side ));
    printf("circle area is : %f\n", circleArea( 3.14 * rad * rad));

    return 0;
}

float sqareArea(float side){
    return side * side ;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
    return a*b;
}


// find the max number.-------------------------------------------------
#include <stdio.h>

int max(int x, int y){
    return (x>y)? x:y;
}
int max_of_four(int a, int b, int c, int d){
    int max1 = max(a ,b);
    int max2 = max(c ,d);
    return max(max1, max2);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}