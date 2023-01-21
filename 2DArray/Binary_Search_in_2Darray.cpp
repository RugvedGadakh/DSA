#include<iostream>
using namespace std;

int main(){
    int row,col; 
    cin>>row>>col;
    int matrix[100][100];
    cout<<"Taking input for row wise arrrangement: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"element to be found : ";
    cin>>target;
    int flag=0;
    int start=0;
    int end = (row*col)-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        int element = matrix[mid/col][mid%col];

        if(element == target){
            flag =1;
        }
        if(element<target){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    if(flag==1){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}