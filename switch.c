// Switch condition 
#include<stdio.h>

int main(){
    int day ; // 1-mon, 2-tues, 3-wed, 4-thur, 5-fri, 6-sat, 7-sun 
    printf("Enter day (1-7) : ");
    scanf("%d" , &day);

    switch (day){
        case 1 : printf("Monday \n");
               break;

        case 2 : printf("Tuesday \n");
               break; 
               
        case 3 : printf("Wednesday \n");
               break;
               
        case 4 : printf("Thursday \n");
               break;
               
        case 5 : printf("Friday \n");
               break;  
               
        case 6 : printf("Saturday \n");
               break;  
               
        case 7 : printf("Sunday \n");
               break;        

        default : printf("Not a valid day ");

    }
}