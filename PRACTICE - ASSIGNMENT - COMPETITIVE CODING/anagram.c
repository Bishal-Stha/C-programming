#include<stdio.h>
int main()
{
    char str[] ="male";
    char str2[] ="lame";
    int n = sizeof(str)/sizeof(str[0])-1;
    int n2 = sizeof(str2)/sizeof(str2[0])-1;
    int count=0; 

    if(n != n2)
    {
        printf("Not Anagram");
        return 1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(str[i] == str[j]){
            count++;
            }
        }
    }
    (count ==n)?printf("%s and %s are anagrams.",str, str2): printf("Not Anagram");
    return 0;

}