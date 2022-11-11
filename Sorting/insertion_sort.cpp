#include <iostream>
using namespace std;

int main(){

    int arr[100];

    int n;
    cin>>n;

    for(int a=0 ;a<n ; a++ ){
        cin>> arr[a];
    }

    for (int i =0; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]= temp;
        
    }
    for(int a=0 ;a<n ; a++ ){
        cout<< arr[a]<<" ";
    }


}