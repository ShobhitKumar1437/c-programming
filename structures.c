// Structures -----------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.cgpa =  8.11;
    s1.roll = 1230440050;
    strcpy(s1.name, "shobhit");

    printf("student name = %s\n",s1.name);
    printf("student roll no = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);

    return 0 ;
}


// Que.--> Write a program to store the data of 3 students.-----------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student student_1;
    student_1.cgpa =  8.11;
    student_1.roll = 1230440050;
    strcpy(student_1.name, "shobhit");

    printf("student 1  name = %s\n",student_1.name);
    printf("student 1  roll no = %d\n",student_1.roll);
    printf("student 1  cgpa = %f\n",student_1.cgpa);


    struct student student_2;
    student_2.cgpa =  8.45;
    student_2.roll = 1230440040;
    strcpy(student_2.name, "xyz");

    printf("student 2  name = %s\n",student_2.name);
    printf("student 2 roll no = %d\n",student_2.roll);
    printf("student 2 cgpa = %f\n",student_2.cgpa);



    struct student student_3;
    student_3.cgpa =  9.11;
    student_3.roll = 1230440012;
    strcpy(student_3.name, "xyzi");

    printf("student 3 name = %s\n",student_3.name);
    printf("student 3 roll no = %d\n",student_3.roll);
    printf("student 3 cgpa = %f\n",student_3.cgpa);

    return 0 ;
}

// Array of structures ---------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student ece[100];
    ece[100].cgpa =  8.11;
    ece[100].roll = 1230440050;
    strcpy(ece[100].name, "shobhit");

    printf("student name = %s\n",ece[100].name);
    printf("student roll no = %d\n",ece[100].roll);
    printf("student cgpa = %f\n",ece[100].cgpa);

    return 0 ;
}


// Initializing structures -----------------------------------------------------------------------

#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student s1 = {"shobhit", 1345, 7.9};

    printf("student name = %s\n",s1.name);
    printf("student roll no = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
   
    return 0 ;
}


// Pointers to structures----------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student s1 = {"shobhit", 1345, 7.9};
    struct student *ptr = &s1;

    printf("student name = %s\n",(*ptr).name);
    printf("student roll no = %d\n",(*ptr).roll);
    printf("student cgpa = %f\n",(*ptr).cgpa);
   
    return 0 ;
}


// Arrwo Operator----------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};
int main(){
    struct student s1 = {"shobhit", 1345, 7.9};
    struct student *ptr = &s1;

    printf("student name = %s\n",ptr->name);
    printf("student roll no = %d\n",ptr->roll);
    printf("student cgpa = %f\n",ptr->cgpa);
   
    return 0 ;
}


// Passing structure to function ----------------------------------------------------------
#include<stdio.h>
#include<string.h>
struct student{
    char name[150];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);
int main(){
    struct student s1 = {"shobhit", 1345, 7.9};
    printInfo(s1);   
    return 0 ;
}
void printInfo(struct student s1){
    printf("student information : \n");
    printf("student name = %s\n",s1.name);
    printf("student roll no. = %d\n",s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
}


// Typedef keyword --------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>

typedef struct ComputerEnginrringStudent{
    int roll;
    float cgpa;
    char name[100];
}ces;
int main (){
    ces s1 = {1230440050, 8.11, "Patel Brahamanand Shobhit Kumar Verma"};

    printf("student information : \n");
    printf("student name = %s\n",s1.name);
    printf("student roll no. = %d\n",s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
}


// Que.--> Enter address(house no., block, city, state)of 5 people.-------------------------
#include<stdio.h>
#include<string.h>

typedef struct AddressofFivePeople{
    int houseNo;
    char blockName[100];
    char city[100];
    char state[100];
}afp;
int main (){
    afp people1 = {12, "A-block", "lucknow", "utter pradesh"};
    afp people2 = {13, "B-block", "lucknow", "utter pradesh"};
    afp people3 = {14, "C-block", "lucknow", "utter pradesh"};
    afp people4 = {15, "D-block", "lucknow", "utter pradesh"};
    afp people5 = {16, "E-block", "lucknow", "utter pradesh"};

    printf("information of person 1 : \n");
    printf("address is : %d, %s, %s, %s\n", people1.houseNo, people1.blockName, people1.city, people1.state);
    printf("information of person 2 : \n");
    printf("address is : %d, %s, %s, %s\n", people2.houseNo, people2.blockName, people2.city, people2.state);
    printf("information of person 3 : \n");
    printf("address is : %d, %s, %s, %s\n", people3.houseNo, people3.blockName, people3.city, people3.state);
    printf("information of person 4 : \n");
    printf("address is : %d, %s, %s, %s\n", people4.houseNo, people4.blockName, people4.city, people4.state);
    printf("information of person 5 : \n");
    printf("address is : %d, %s, %s, %s\n", people5.houseNo, people5.blockName, people5.city, people5.state);
    
}


// Que --> Create a structure to store vectors. then make a function to return sum of 2 vaectors.
#include<stdio.h>
#include<string.h>
struct vector{
    int x, y;
};

void calsum(struct vector v1, struct vector v2, struct vector sum);
int main (){
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calsum(v1, v2, sum);
    return 0;
}
void calsum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}


// Que. --> Create a structure to store complex numbers.(use arrow operator)-------------
#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};

int main (){
    struct complex number1 =  {5, 8};
    struct complex *ptr = &number1;
    printf("real part = %d\n", ptr->real);
    printf("img part = %d\n", ptr->img);
    return 0;

}


// Que.--> make a structure to store Bank Account information of a customer to ABC bank. also, make an alias for it.
#include<stdio.h>
#include<string.h>
typedef  struct BankAccount{
    int accountNo;
    char accholder[100]; 
}acc;

int main (){
    acc info1 = {123, "patel"};
    acc info2 = {145, "kumar"};
    acc info3 = {178, "verma"};
    printf("bank infomation 1 : \n");
    printf("account no. is = %d \naccount holder is = %s \n",info1.accountNo,info1.accholder);
    printf("bank infomation 2 : \n");
    printf("account no. is = %d \naccount holder is = %s \n",info2.accountNo,info2.accholder);
    printf("bank infomation 3 : \n");
    printf("account no. is = %d \naccount holder is = %s \n",info3.accountNo,info3.accholder);
}