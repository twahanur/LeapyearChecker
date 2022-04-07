#include<stdio.h>
int main()
{
    int number;
    printf("Input Number: ");
    scanf("%d", & number);
    if (number % 400 == 0)
    {
        printf("The %d Is leap year", number);
    }
      else if( number % 4 == 0){
        printf("The %d is leap year", number);
    }

    else if( number % 400 != 0 && number % 100 == 0){
        printf("The %d is not leap year", number);
    }
   
    else{
        printf("The %d is Not a leap year", number);
    }
    
    return 0;
}
