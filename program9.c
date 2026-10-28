
#include<stdio.h>
#include<stdlib.h>
// define 

/////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer , Integer
//  Output        : Integer
//  Description   : Perform Addition
//  Date          : 04/10/2026
//  Author        : Ashwin Vinayak Yadav

///////////////////////////////////////////

int Addition(
                int iNo1,   // First input
                int iNo2    // Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2 ;    // Business Logic 

    return iAns;
}

///////////////////////////////////////////
//
// Entery point of the Application
//
///////////////////////////////////////////
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

     printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2); 

    printf("Addition is : %d\n",iResult);

    
    return EXIT_SUCCESS;
}

///////////////////////////////////////////
//  Step 5 :    Test the program
//  Tested test Cases
// -------------------------------------------
//  Input1      Input2   Output
//  ----------------------------------------
//  10          11
//  11          0
//  0           11
//  20          -9
//  -9         
//   
///////////////////////////////////////////