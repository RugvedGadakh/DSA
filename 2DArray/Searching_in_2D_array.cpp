#include <iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    // defining 2D Array
    int arr[3][4];

    // taking in put---> row wise

    cout<<"Taking input for row wise arrrangement: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }


    // taking output
    cout<<"Output row wise : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Entre element to be search : "<<endl;
    int target ;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Not Element found "<<endl;
    }


} 