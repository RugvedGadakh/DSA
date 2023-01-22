#include <iostream>
using namespace std;

bool isSorted(int n, int arr[]){
    //base case
    if(n==0 || n==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        bool ans = isSorted(n-1,arr+1);
        return ans;
    }

}

int main(){
   
   int n = 10;
   int arr[10] = {1,2,8,4,5,6,7,8,9,10};
   cout<<isSorted(n,arr);
   cout<<endl;
   
}