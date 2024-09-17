// Function of malloc()---------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 9;
    ptr[3] = 5;
    ptr[4] = 7;

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}


// Que.--> Write a program to allocate memory to store 5 prices.--------------------------
#include<stdio.h>
#include<stdlib.h>
int main (){
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 9;
    ptr[3] = 5;
    ptr[4] = 7;

    for (int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}

// Function of calloc()-----------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int *)calloc(5 ,sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}


// QUE.--> Write a program allocate memory of size n, where n is entered by the user.------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    int n;

    printf("enter n : ");
    scanf("%d",&n);


    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}


// Function of free() -------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    int n;

    printf("enter n : ");
    scanf("%d",&n);


    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));

    for (int i = 0; i < 2; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;
}


// Function of reallocation() 
// Allocate memory for 5 numbers. then dynamically increase it to 8 numbers.--------------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers(5) : ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }


    ptr = realloc(ptr, 8);
    printf("enter numbers(8) : ");
    for (int i = 0; i < 8; i++){
        scanf("%d\n", ptr[i]);
    }

    for (int i = 0; i < 8; i++){
        printf("number %d is %d\n", i, ptr[i]);
    }
    return 0;
}


// QUE.--> Create an array of size 5(using calloc) and enter its values from the user.
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers(5) : ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }


    ptr = realloc(ptr, 8);

    for (int i = 0; i < 5; i++){
        printf("number %d is %d\n", i, ptr[i]);
    }
    return 0;
}


// QUE. -- > Allocate memory to store first 5 odd number, then reallocate it to store first 6 even number.
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i<5; i++){
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr , 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for (int i = 0; i<6; i++){
        printf("%d", ptr[i]);
    }

    return 0;
}