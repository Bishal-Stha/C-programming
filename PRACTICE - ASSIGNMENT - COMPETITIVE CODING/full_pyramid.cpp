/*
     *    
    ***   
   *****  
  ******* 
 *********  
***********
 */


#include<stdio.h>
int main()
{
    int i,j;
    int n=6;
    for(i=0; i<n; i++){
        for(j=0; j<(2*n-1); j++){
            if(
                i==0 && (j >4 && j <6) ||
                i==1 && (j >3 && j <7) ||
                i==2 && (j >2 && j <8) ||
                i==3 && (j >1 && j <9) ||
                i==4 && (j >0 && j <10) ||
                i==5
            ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}