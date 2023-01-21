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
    int rowIndex =0;
    int colIndex = col-1;
    while(rowIndex<row && colIndex>=0){
        int element = matrix[rowIndex][colIndex];

        if(element == target){
            flag =1;
        }
        if(element<target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    if(flag==1){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}