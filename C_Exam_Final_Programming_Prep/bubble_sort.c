#include<stdio.h>
int* bubble_sort(int arr[], int size);

int main()
{
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int *result = bubble_sort(arr,10);

    printf("Sorted Array\n");
    for(int i=0; i<10; i++){
        printf("%d\t",result[i]);
    }

}

int* bubble_sort(int arr[], int size){
    int temp;
    for(int i=0; i<size-1; i++){ //0-8
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}