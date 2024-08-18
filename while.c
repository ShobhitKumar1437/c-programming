// print the numbers from 0 to n, if n is given by user.

#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    int i=0;
    while (i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
}