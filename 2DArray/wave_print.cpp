#include <iostream>
using namespace std;

void wavePrint(int arr[][3],int nrows , int ncols){

    for(int j =0; j<ncols ; j++){
        if(j%2 !=0){
            for(int i= nrows-1;i>=0;i--){
                cout<<arr[i][j]<<" "; 
            }
        }
        else{
            for(int i=0;i<nrows;i++){
                cout<<arr[i][j]<<" "; 
            }
        }
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // cout<<"wave Print"<< wavePrint(arr,3,3)<<endl;
    wavePrint(arr,3,3);
}