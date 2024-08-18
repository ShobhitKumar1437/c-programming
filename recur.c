// print 5 times hello world by using recursion function.
#include<stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;
}
void printHW(int count){
    if (count == 0){
        return;
    }
    printf("hello world \n");
    printHW(count-1);
}


// Sum of first n natural numbers. ----------------------------------------------------------
#include<stdio.h>
int sum(int n);
int main (){
    printf("sum is : %d", sum(5));
    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1+n;
    return sumN;
}


// factorial of n.-------------------------------------
#include<stdio.h>
int factorial(int n);
int main (){
    printf("factorial is : %d", factorial(5));
    return 0;
}
int factorial(int n){
    if (n==1){
        return 1;
    }
    int factorial1 = factorial(n-1);
    int factorialN = factorial1*n;
    return factorialN;
}


// Write a function to convert celcius to fahrenheit.-------------------------------------------
#include<stdio.h>
float degree(float c);
int main (){
    printf("fahrenheit : %f", degree(32));
    return 0;
}
float degree(float c){
   float f1= (c*9.0/5.0);
   float f = f1+32;
   return f;
}


// Write a function to calculate percentage of a student from Marks in science, math & sanskrit . ----------------------
#include<stdio.h>

float calcpercentage(float science, float math, float sanskrit);

int main(){
    float science = 98.0;
    float math = 95.0;
    float sanskrit = 99.0;

    printf("percentage is : %f", calcpercentage(science,math,sanskrit));
    return 0;
}
float calcpercentage(float science, float math, float sanskrit){
    return ((science+ math + sanskrit) / 3 );
}



// Write a function to print n terms of the fibonacci sequence.--------------------------
#include<stdio.h>
int fib(int n);
int main (){
    fib(6);
    return 0;
}
int fib(int n){
    
        if(n == 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    int fibNm1 = fib(n-1);
    int fibN = fibNm1+fib(n-2);
    printf("fib is %d : %d\n", n, fibN);
    return fibN;
}