#include <stdio.h>
int main (){
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for (int i = 1;i<15;i++){
        int key = arr[i];
        int j = i -1;
        while (j>= 0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for (int i =0;i<15;i++){
        printf ("%d \n",arr[i]);
    }
    return 0;
}