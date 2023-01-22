#include <iostream>
using namespace std;

int getSum(int n,int *arr){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int remaining_part = getSum(n-1,arr+1);
    int sum = arr[0]+ remaining_part;
    return sum;
        
    

}

int main(){
   
   int n = 10;
   int arr[10] = {1,2,8,4,5,6,7,8,9,10};

   cout<<getSum(n,arr)<<endl;
   
   
}