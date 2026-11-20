/*

    -------------------------------------------
                Operation &&
    -------------------------------------------
    Result1         Result2         Final Result  
    -------------------------------------------
    TRUE            TRUE                TRUE
    TRUE            FALSE               FALSE
    FALSE           TRUE                FALSE       Short Circuit
    FALSE           TRUE                FALSE       Short Circuit
    -------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("it is Divisible  ");
    }
    else 
    {
        printf("It  Not Divisible  ");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}