#include <stdio.h>
int main (){
    int arr[]= {64,12,15,19,21,1,2,3,5};
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0;i<n-1;i++){
        int min = i ;
        for (int j = i+1;j<n;j++){
            if ( arr[min] > arr[j]){
                int temp = arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i =0;i<n;i++){
        printf ("%d \n",arr[i]);
    }
    return 0;
}