//bank loan
#include<stdio.h>
int main()
{
    int age,salary;
    printf("Enter age in years:");
    scanf("%d", &age);
    printf("Enter Your salary:");
    scanf("%d", &salary);
    if(age>=21,salary>=21000)
    {
       printf("Congratulations you qualify for a loan.");
    }
   else
   {
       printf("Unfortunately, we are unable to offer you a loan at this time.");
   }
    return 0;

}
