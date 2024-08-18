 #include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if (i == 3){
           continue;
        }
        printf("%d \n",i);
    }
return 0;
}

// Print all numbers from 1 to 10 except for 6.------------------------
#include<stdio.h>
int main (){
    for(int i=1; i<=10; i++){
        if (i == 6){
            continue;
        }
        printf("%d \n ",i);
    }
    return 0 ;
}

// Print all the odd numbers from 5 to 50. 
#include<stdio.h>
int main(){
    for(int i=5; i<=50; i++){
        if (i % 2!= 0){
            printf("%d \n",i);
        }
    }
return 0;
}

// Print the factorial af a number n.---------------------------------------------
#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d" ,&n);

    int fact = 1;
    for (int i = 1; i <=n; i++){
        fact = fact * i;
    }
    printf("final factriol is : %d" , fact);
}