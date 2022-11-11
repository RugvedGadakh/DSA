#include <iostream>
using namespace std;

int main(){

    int arr[100];

    int n;
    cin>>n;

    for(int a=0 ;a<n ; a++ ){
        cin>> arr[a];
    }

    for (int i =0; i<n-1; i++){
        int min_index =i;

        for (int j =i+1; j<n; j++){

            if(arr[j]< arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);

    }

    for(int a=0 ;a<n ; a++ ){
        cout<< arr[a]<<" ";
    }

}


