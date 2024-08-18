#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if (i == 3){
           break;
        }
        printf("%d \n",i);
    }
    printf("end");
return 0;
}

// Keep taking numbers as input from user until user enters an odd number.----------------------------------

#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number :");
        scanf("%d",& n);
        printf("%d \n",n);
        if (n%2!= 0){
           break;
        }
    }while(1);
    printf("stop");
return 0;
}


// Keep taking numbers as input from user until user enters a number which is multiple of 7. ----------------------------------

#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number :");
        scanf("%d",& n);
        printf("%d \n",n);
        if (n% 7 == 0){
           break;
        }
    }while(1);
    printf("stop");
return 0;
}