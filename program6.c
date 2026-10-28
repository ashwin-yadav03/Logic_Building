/*
    Step 1 :    Understand the problem stament
    Step 2 :    Write the Program
    Step 3 :    Decide the programming language
    Step 4 :    write the program
    Step 5 :    Test the program
*/

//////////////////////////////////////////
//
//  Step 1 :    Understand the problem stament
//              User is going to enter any 2 integer 
//               And we have to perform addition
////////////////////////////////////////////
//  Step 2 :    Write the Program
/*
    STAR
        Accept the First number as No1
        Accept the Second number as No2
        Create the variable as Ans to store the result
        Perform the Addion and store into Ans
        Display the result from Ans
    END


*/
////////////////////////////////////////////
//
//  Step 3 :    Decide the programming language
//              we select C Programming
//
//////////////////////////////////////////
//  
//////////////////////////////////////////
//
//  Step 4 :    write the program
//
/////////////////////////////////////////


#include<stdio.h>

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2 ;    // Business Logic 

    return iAns;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

     printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2); 

    printf("Addition is : %d\n",iResult);

    
    return 0;
}