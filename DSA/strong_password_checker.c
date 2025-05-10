/*
A password is considered strong if the below conditions are all met:

It has at least 6 characters and at most 20 characters.
It contains at least one lowercase letter, at least one uppercase letter, and at least one digit.
It does not contain three repeating characters in a row (i.e., "Baaabb0" is weak, but "Baaba0" is strong).
Given a string password, return the minimum number of steps required to make password strong. if password is already strong, return 0.

In one step, you can:

Insert one character to password,
Delete one character from password, or
Replace one character of password with another character.
 

Example 1: #!*& (lowercase, uppercase, digit less than 6 (2))

Input: password = "a" 6-(chacters in password)// 6-1 =5 a->3
Output: 5
Example 2:

Input: password = "aA1" // 6-3 =3
Output: 3
Example 3:

Input: password = "1337C0d3"
Output: 0

Input: password ="aaa"//3 or 4
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    printf("Enter password: ");
    scanf("%s",password);
    int n =strlen(password);//i could have used strlen. but i didn't cause i am not mid.
    int fault =4;
    int checkChars[3]= {0,0,0};
    /*
    Checks to be done.
    1. greater or equal to 6 and less or equal to 20.
    2. Alteast one lowercase and one uppercase letter and aleast one digit.
    3. Can not contain repeating characters in a row.
    4. return 0 if all cases is satisfied else return the number of steps to make it satsify the case.
    */

    //case 1: 6-20 ko range ma hunu paro.

    for(int i=0; i<n; i++)
    {
        
        // case2: atleast 1 ta uppercase.
        if(password[i]>=65 && password[i]<=90)
        checkChars[0]++;
        // case3: atleast 1 ta lowercase.
        if(password[i]>=97 && password[i]<=122)
        checkChars[1]++;
        // case4: atleast 1 ta digit.
        if(password[i]>=48 && password[i]<=57)
        checkChars[2]++;
    }

    for(int i=0; i<n-2; i++)
    {
        // case5:
        if(password[i]==password[i+1] && password[i+1] ==password[i+2])
            fault++; //yo true vayo vane 1 ta fault hunxa. so maile initially fault ma 5 ko thau ma 4 rakheko. 
    }

    for(int i=0; i<3; i++)
    {
        if(checkChars[i]>0)
        fault--;

    }

    if(n<6){
        printf("maximum no steps required is %d",6-n);
        return 1;
   }
    else
     {
        fault--;
     }



    if(fault >0)
    printf("minimum number of steps required: %d",fault);
    else {
        printf("Your password is strong.");
    }
    return 0;
}