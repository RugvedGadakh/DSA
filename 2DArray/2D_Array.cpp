#include <iostream>
using namespace std;

int main(){

    // defining 2D Array
    int arr1[3][4];
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr3[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    // taking in put---> row wise

    cout<<"Taking input for row wise arrrangement: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr1[i][j];
        }
    }


    // taking output
    cout<<"Output row wise : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }

    // taking in put---> col wise
    cout<<"Taking input for colom wise arrrangement: ";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[j][i];
        }
    }
    // taking output
    cout<<"Output colom wise : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Output for arr2 : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"Output for arr3 : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr3[i][j]<<" ";
        }cout<<endl;
    }
} 