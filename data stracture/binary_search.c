#include<stdio.h>
int main (){
    int key , n , i , loc=0 ,beg=0 ,mid , end=n-1 ;
    int arr[n];
    printf("enter the capacity of the array ");
    scanf("%d",&n);
    printf("enter array's elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    printf("enter the value u search for ");
    scanf("%d",&key);
    while(beg<end);
    mid=(beg+end)/2;
    if (arr[mid]==key){
        printf("value is find at index %d",&mid);
        return 0 ;
    } else if (arr[mid]<key){
        beg = mid+1;
    } else {
        beg = mid-1;
    }
    return 0 ;
}
