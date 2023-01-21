#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int row,col; 
    cin>>row>>col;
    int matrix[100][100];
    cout<<"Taking input for row wise arrrangement: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    // intialization
    int startingRow =0;
    int startingCol =0;
    int endingRow =row-1;
    int endingCol =col-1;
    int count =0;
    int total = row*col;

    while(count<total){
        // stating row
        for(int index= startingCol; count<total && index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // ending col
        for(int index= startingRow; count<total &&  index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // ending Row
        for(int index= endingCol; count<total &&  index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // starting col
        for(int index= endingRow; count<total && index>=startingRow; index++){
            ans.push_back(matrix[index][startingCol]);
            
        }
        startingCol++;

        for(int i:ans){
        cout<<i<<" ";
        }
        cout<<endl;
    }

}