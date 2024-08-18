#include<stdio.h>
int main(){
    for(int i=0; i<=10; i++){
        printf("%d \n",i);
    }
return 0;
}

// Print the  sum of numbers and revers the number input by the user.
#include<stdio.h>
int main(){
    int n;
  
    printf("Enter number :");
    scanf("%d",&n);

    int sum =0;
    for(int i = n; i>=1; i--){
        sum=sum+i;
        printf("%d \n",i);
    }
    printf("sum is : %d",sum);

return 0;
}

// Print the table of a number input by the user.
#include<stdio.h>
int main(){
    int n;
  
    printf("Enter number :");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d \n",n*i);
    }
return 0;
}

// Print reverse of the table for a number n. -------------------

#include<stdio.h>
int main(){
    int n;
  
    printf("Enter number :");
    scanf("%d",&n);

    for(int i=10; i>=1; i--){
        printf("%d \n",n*i);
    }
return 0;
}


// Calculate the sum of all numbers between 5 and 50.(including 5 & 50).--------------------------------
#include<stdio.h>
int main(){
    int sum =0;
    for(int i=5; i<=50; i++){
        sum = sum +i;
    }
    printf("sum is : %d",sum);
return 0;
}