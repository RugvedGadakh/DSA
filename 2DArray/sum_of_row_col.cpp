#include <iostream>
#include <climits>
using namespace std;

void RowSum(int arr[][3],int i,int j){
    for(int i=0;i<3;i++){
        int row_sum =0;
        for(int j=0;j<3;j++){
            row_sum +=arr[i][j];
        }
        cout<<row_sum<<" ";
    }cout<<endl;
}

void ColSum(int arr[][3],int i,int j){
    for(int j=0;j<3;j++){
        int col_sum =0;
        for(int i=0;i<3;i++){
            col_sum +=arr[i][j];
        }
        cout<<col_sum<<" ";
    }cout<<endl;
}

int LargestRowSum(int arr[][3],int row ,int col){
    int maxi = INT_MIN;
    int row_index = -1;
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }

        if(sum>maxi){
            maxi = sum;
            row_index=i;
        }
    }
    cout<<"The maximum sum is : "<<maxi<<endl;
    return row_index;
}
int main(){

    // defining 2D Array
    int arr[3][3];

    // taking in put---> row wise

    cout<<"Taking input for row wise arrrangement: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


    // taking output
    cout<<"Output row wise : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    // row wise sum 
    cout<<"Printing row Sum : "<<endl;

    RowSum(arr,3,3);

    // col wise sum 
    cout<<"Printing col Sum : "<<endl;

    ColSum(arr,3,3);
    int ansIndex = LargestRowSum(arr,3,3);
    cout<<"Max Row is at index : "<< ansIndex <<endl;


} 