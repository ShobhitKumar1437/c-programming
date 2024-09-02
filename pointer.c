// POINTER-------------------------------------------------

#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    
    // print address
    printf("%p\n",&age); 
    printf("%u \n",&age);

    printf("%u\n",ptr);
    printf("%p\n",ptr);

    printf("%p\n",&ptr);
    printf("%u\n",&ptr);
    
    // print value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d",*(&age));


    return 0;
}
// ------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 100;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr = *ptr+5; // *ptr +=5;
    printf("x = %d\n", x);
    printf("*ptr = %d \n", *ptr);

    *ptr = *ptr+1; // (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d \n", *ptr);
    return 0;
}


// POINTER TO POINTER ---------------------------------------------------------

// Print the value of 'i' from its pointer to pointer. ------------------------
#include<stdio.h>
int main (){
    
    int i =5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d", **pptr);
    return 0;
}

// call by Value -------------------------------------------------
#include<stdio.h>
void square(int n);
int main (){
    int number  = 4;
    square(number);
    printf("number = %d\n", number);
    return 0;
}
void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}


// call by reference / pointer -----------------------------------------
#include<stdio.h>
void square(int n);
void _square(int* n);
int main (){
    int number  = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", &number);
    return 0;
}
void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}
void _square(int* n){
    *n = (*n)*(*n);
    printf("square = %d\n", *n);
}


// Swap 2 numbers, a and b.(swap ka mean interchange karna)--------------------------------------------------------------
#include<stdio.h>

void swap1(int *a, int *b);
int main (){
    int x = 3, y = 5;
    swap1(&x,&y);
    printf("x = %d & y = %d\n", x,y);
    return 0;
}
// call by reference
void swap1(int *a, int *b){
    int t =*a;
    *a=*b;
    *b= t;
}

// will the address output be same -----------------------------
#include<stdio.h>
void printadress(int *n);

int main(){
    int n= 4;
    printadress(&n);
    printf("address of n is : %u\n" , &n);
    return 0; 
}
void printadress(int *n){
    printf("address of n is : %u\n" , n);
}

// Write a function to calculate the sum, product & average of 2 numbers. print that average in the main function.
#include<stdio.h>
void work(int a, int b, int *sum, int *prod, int *avg);
int main (){
    int a = 3, b = 5;
    int sum, prod , avg;
    work(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}
void work(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}