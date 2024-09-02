// SIMPLE ARRAY
// print the marks of 3 subject using array.----------------------------------------------------------
#include<stdio.h>
int main(){
    int marks [3];
    printf("enter phy : ");
    scanf("%d",&marks[0]);

    printf("enter che : ");
    scanf("%d",&marks[1]);

    printf("enter math : ");
    scanf("%d",&marks[2]);

    printf("phy = %d, che = %d, math = %d",marks[0], marks[1], marks[2]);
    return 0;
}

// write a program to enter price of 3 items and print their final cost with gst.-----------------------
#include<stdio.h>
int main(){
    float price[3];
    printf("enter price 1 : ");
    scanf("%f",&price[0]);

    printf("enter price 2 : ");
    scanf("%f",&price[1]);

    printf("enter price 3 : ");
    scanf("%f",&price[2]);

    printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
    printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
    printf("total price 3 : %f\n", price[2]+(0.18*price[2]));

    return 0;
}

// POINTER ARITHMETIC ------------------------------------------------------------------------------
// CASE 1--> INT Increment and decrement.===============================
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
   return 0;
}

// CASE 2--> FLOAT Increment and decrement.=============================================
#include<stdio.h>
int main(){
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
   return 0;
}


// CASE 3--> CHAR Increment and decrement.===============================
#include<stdio.h>
int main(){
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
   return 0;
}


// Pointer to Arithmetic-----------------------------

#include<stdio.h>
int main(){
   int age = 22;
   int _age= 30;
   int *ptr = &age;
   int *_ptr = &_age;

   printf("difference = %u\n", ptr-_ptr);
   _ptr = &age;
   printf("comperision = %u\n", _ptr == ptr);
   return 0;
}


// Traverse in array -----------------------------------------------------------------
#include<stdio.h>
int main(){
    int aadhar[5];

    // input 
    int *ptr = &aadhar[0];
    for (int i = 0; i <5; i++){
        printf("%d inex : ",i);
        scanf("%d", &aadhar[i]);
    }
    // output
    for (int i = 0; i < 5; i++){
        printf("%d index = %d\n", i, aadhar[i]);
    }
   return 0;
}

// Array as function argument ----------------------------------------------------------
#include<stdio.h>
void printNumbers(int  *arr, int n);
int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr, 6);
    return 0;
}
void printNumbers(int  *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
}

// MULTI DIMENSIONAL ARRAY ====+++++++++++++++++++++++++++++++++++_==========================
#include<stdio.h>
int main(){
    // 2x3 (2 childrens ke 3 subject ke marks store karane hai)
    int marks [2][3];
    marks[0][0] = 90;
    marks[0][1] = 70;
    marks[0][2] = 85;

    marks[1][0] = 90;
    marks[1][1] = 70;
    marks[1][2] = 85;

    printf("%d ", marks[0][1]);
    return 0;
}

// input by user -----------------------------------------------------------------
#include<stdio.h>
int main(){
    // 2x3 (2 childrens ke 3 subject ke marks store karane hai)
    int marks [2][3];

    printf("enter phy : ");
    scanf("%d",&marks[0][0]);
    printf("enter che : ");
    scanf("%d",&marks[0][1]);
    printf("enter math : ");
    scanf("%d",&marks[0][2]);

    printf("phy = %d, che = %d, math = %d",marks[0][0], marks[0][1], marks[0][2]);
    printf("\n");


    printf("enter phy : ");
    scanf("%d",&marks[1][0]);
    printf("enter che : ");
    scanf("%d",&marks[1][1]);
    printf("enter math : ");
    scanf("%d",&marks[1][2]);

    printf("phy = %d, che = %d, math = %d",marks[1][0], marks[1][1], marks[1][2]);
    return 0;
}