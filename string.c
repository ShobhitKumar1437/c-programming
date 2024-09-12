#include<stdio.h>
int main(){
    char name[] = {'s','h','o','b','h','i','t','\0'};
    char name1[] = "shobhit";
    printf("%s \n",name);
    printf("%s",name1);
    return 0;
}

//  Que.1--> Create a string firstname and last name to store details of usre and print all the characters using loop.

#include<stdio.h>
void printString(char arr[]);
int main(){
    char firstname[] = "shobhit";
    char lastname[] = "kumar";

    printString(firstname);
    printString(lastname);
    return 0;
}

void printString(char arr[]) {
    for (int i = 0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    
}


// String Format Specifier-----------------------------------------
#include<stdio.h>
int main(){
    char name[40];
    scanf("%s",name);
    printf("your name is : %s", name);
    return 0 ;
}

// Que.--> Ask the user to enter their firstname and print it back to them.---------------
// Also try this with their fullname.
#include<stdio.h>
int main(){
    char firstname[50];
    scanf("%s",firstname);
    printf("your name is : %s \n", firstname);

    char fullname[150];
    scanf("%s",fullname);
    printf("your full name is : %s", fullname);
    return 0 ;
}


// string function.----------------------------------------
#include<stdio.h>
int main(){
    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0 ;
}


// String using pointer.-----------------------------------------
#include<stdio.h>
int main(){
    char *canchange = "hello world";
    puts(canchange);

    canchange = "hello";
    puts(canchange);
}


// Make a program that inputs users name and prints its length.---------------------------------
#include<stdio.h>
int countLength(char arr[]);
int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is : %d", countLength(name));
    return 0 ;
}
int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i]!= '\0'; i++){
        count++;
    }
    return count - 1;
    
}

// standard library function.-----------------------------------------------
// print length.
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter the characters : ");
    scanf("%s" , name);
    printf("Length is : %d", strlen(name));
    return 0 ;
}


// print new string to old string.------------------------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "shobhit";
    char str2[] = "kumar";
    strcpy(str1 , str2);
    puts(str1);
}


// concatenates first string with second string.----------------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "shobhit ";
    char str2[] = "kumar";
    strcat(str1 , str2);
    puts(str1);
}

// print comperission of 2 strings in ASCII value (A=65, B=66 and soo on ).  --------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d" , strcmp(str1 , str2));
}


// Que.--> Take a string input from the user using %c.------------------------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    char ch;
    int i = 0;

    while (ch !='\n'){
        scanf("%c" , &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    
}


// Que.--> Find the salted form of a password entered by user if the salt is "123" and added at the end.
#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main(){    
    char password[100];
    scanf("%s", password);
    salting(password);
}
void salting(char password[]){
    char salt[] = "123";
    char newpassword[200];

    strcpy(newpassword, password); // newpassword = "test"
    strcat(newpassword, salt); // newpassword = "test" + "123"
    puts(newpassword);
}


// Que. --> Write a function named slice, which takes a string and returns a sliced string from index n to m.  
#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
int main(){    
    char str[] = "helloworld";
    slice(str, 3, 6);
}
void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
    
}


// Que. --> Write a function to count the occurence of vowels in a string.-------------------------------
#include<stdio.h>
#include<string.h>

int countVowels(char str[]);
int main(){
    char str[] = "helloeworld";
    printf("vowels are : %d", countVowels(str));
}
int countVowels(char str[]){
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
        
    }
    return count;
}


// Que. --> Check if a given character is present in a stirng or not.------------------------------
#include<stdio.h>
#include<string.h>
void checkchar(char str[], char ch);
int main (){
    char str[] = "shobhitkumar";
    char ch = 'a';
    checkchar(str,ch);
}
void checkchar(char str[], char ch){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ch){
            printf("character is present");
            return;
        }
        
    }
    printf("character is not present");
    
}