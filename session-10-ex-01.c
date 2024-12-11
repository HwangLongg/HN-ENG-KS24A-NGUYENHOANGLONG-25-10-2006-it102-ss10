#include <stdio.h>
int main (){
    int n ;
    int arr[5]={1,2,3,4,5};
    scanf ("%d",&n);
    for (int i =0;i<5;i++){
        if (n==arr[i]){
            printf ("phan tu co ton tai trong mang va ơ vi tri so %d ",i+1);
        }
    }
    return 0 ;
}