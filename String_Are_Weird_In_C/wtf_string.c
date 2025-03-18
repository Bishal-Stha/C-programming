#include<stdio.h>
#include<string.h>

int main()
{
    char name[6] ={'B','I','S','H','A','L'}; //Doesn't work well. gives BISHALÇ
    printf("%s\n",name);

    char name2[6] ={'B','I','S','H','A','L'}; //Work well. gives BISHAL
    printf("%s\n",name2);
   
}

/*
Output:
BISHALÇ
BISHALBISHALÇ
*/