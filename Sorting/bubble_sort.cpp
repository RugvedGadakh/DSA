#include <iostream>
using namespace std;

int main(){

    int arr[100];

    int n;
    cin>>n;

    for(int a=0 ;a<n ; a++ ){
        cin>> arr[a];
    }

    bool swapped =false;

    for (int i =1; i<n; i++){

        for (int j =0; j<n-i; j++){

            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
        

    }

    for(int a=0 ;a<n ; a++ ){
        cout<< arr[a]<<" ";
    }

}


