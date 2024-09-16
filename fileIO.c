#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("new array.c", "r");
    if (fptr == NULL){
        printf("file does not exsit \n");
    } else{
        fclose(fptr);
    }
    
    return 0;
}


// Read from a file.  -------------------------------------------------------------------------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("array.c", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fclose(fptr);
    return 0;
}

// Write to a file.--------------------------------------------------------------------------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "a");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    fclose(fptr);
    return 0;
}

// Read a character. --------------------------------------------------------------------------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    fclose(fptr);
    return 0;
}

// Write a character -------------------------------------------------------------------------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "w");

    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
    fputc('S',fptr);
    fclose(fptr);
    return 0;
}


// EOF -------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c" , ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}


// QUE.--> Make a program to read 5 integers from file. ------------------------------------- 
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fclose(fptr);
    return 0;
}


// Make a program to input student information from a user and enter it to a file.-----------
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Student.txt" , "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", &name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name = %s\n", name);
    fprintf(fptr, "Student age = %d\n", age);
    fprintf(fptr, "Student cgpa =  %f\n", cgpa);

    fclose(fptr);
    return 0;
}


// Que.--> Weite a program to write all the odd numbers from 1 to n in a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("number.txt" , "w");

    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 2 != 0){
            fprintf(fptr, "%d\n", i);
        }
        
    }
    fclose(fptr);
    return 0;
}


// QUE.--> 2 numbers A And B are written in a file. write a program to replece them with their sum.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt" , "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt" , "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}