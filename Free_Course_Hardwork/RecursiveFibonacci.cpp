/*
if a=1,b=2,c=3,d should be a+b+c i.e 6. then next element should be 2+3+6 = 11
then goes on until the element is less or equal
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1)
  return a;
  else if(n==2)
  return b;
  else if(n==3)
  return c;
  else {
    return find_nth_term(n-1,b,c,(a+b+c));
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}