#include<stdio.h>
int main () {
    int n , key , i ;
    printf("enter the number of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements  of the array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key value ");
    scanf("%d",&key);
    int found=0;
    for(i=0;i<n;i++){
        if (arr[i]==key){
            printf("number %d is find at index %d",&key,&i);
            found = 1;
            break ;
        }
    }
    if(found != 1){
        printf("not founded");
    }
    return 0 ;
}
