#include<iostream>
using namespace std ;
int main (){
    int n , key , found=0 ;
    cout<<"enter the  n number " ;
    cin>>n ;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0 ; i <n ; i++){
        cin>>arr[i];
    }
    cout<<"enter the number want to search"<<endl;
    cin>>key;
    int f = 0 ;
    for(int i = 0 ; i <n ; i++){
        if(arr[i]==key){
            cout<<"number "<<key <<" is found at index "<<i<<endl;
            f = 1 ;
            break ;
        }
    }
    if(f!= 1){
        cout<<"number not in the array";
    }
    return 0 ;
}


