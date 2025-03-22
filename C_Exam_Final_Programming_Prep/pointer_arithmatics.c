#include<stdio.h>
int main(){
    int* p;
    int a = 10;
    p = &a;
    printf("%d\n",p); 
    /*
    p = p+ sizeof(int) 
    if p = 1000
    sizeof(int) return 4
    then
    p = 1000+ 4
    so, p =p+1 returns 1004
    */
    p = p+1; 
    
    printf("%d\n",p);
    /*
    p = p - sizeof(int) * i
    if p = 1000
    sizeof(int) return 4
    then
    p = 1000- 4 *i
    let i be 5;
    p = 1000- 4 *5
    p = 1000- 20
    p = 980
    so, p =p-5 returns 1080
    */
    p = p-5;

    printf("%d\n",p);
    p++;
    printf("%d\n",p);
}