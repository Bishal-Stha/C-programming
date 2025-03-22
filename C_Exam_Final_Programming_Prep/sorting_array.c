#include<stdio.h>
int main()

{
    int arr[] = {1,3,3,2,10,5,33,23,8};
    int n = ( sizeof(arr) / sizeof(arr[0]) );
    for(int i=0; i<n; i++){
        for(int j=i; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                arr[j] =arr[j] + arr[j+1]; //a = 1+3 =4
                arr[j+1] = arr[j] - arr[j+1]; //b = a-b; //b = 4-3 = 1
                arr[j] = arr[j] - arr[j+1]; // a = 4-1 =3
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
}