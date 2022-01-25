#include <stdio.h>

int main()
{
    float income,dAllow,rAllow,Tincome;
    printf("Enter your salary: ");
    scanf("%f",&income);
    dAllow=0.4*income;
    rAllow=0.2*income;
    Tincome= income+dAllow+rAllow;
    printf("\nThe gross salary is: %f",Tincome);
    return 0;
}
