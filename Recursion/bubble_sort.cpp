#include <iostream>
using namespace std;

void Sorted_Array(int *arr , int n){

    // base case
    if(n==0 || n==1){
        return;
    }
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    Sorted_Array(arr, n-1);
}

int main(){

    int arr[6]= {7,5,2,4,9,1};
    Sorted_Array(arr, 6);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}