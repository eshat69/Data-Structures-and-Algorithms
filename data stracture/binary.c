#include<stdio.h>
int main() {
int L [50];
int key,N,i,loc=0 ;
int Beg,mid,End;
printf("enter capacity of array");
 scanf("%d",& N);
printf("enter elements of the array",N);
for(i=0; i<N; i++){
 scanf("%d",&L[i]);
}
printf("enter the key:");
 scanf("%d",& key);
Beg= 0 ;
End= N-1 ;
while(Beg<End);
mid=(Beg+End)/2;
if(L[mid]==key){
printf("value is found at %d index/n",mid);
return 0;

}
else if (L[mid]<key){
    Beg= mid+1;
}
else {
 End= mid-1 ;
 }
}
loc=0;
return 0 ;
