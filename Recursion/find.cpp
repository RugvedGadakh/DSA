#include <iostream>
using namespace std;

bool search(int *arr,int n, int key){
    //base case
    if(n==0)
        return false;
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining_part =search(arr+1,n-1,key);
        return remaining_part;
    }   

}

int main(){
   
   int n = 10;
   int arr[10] = {1,2,8,4,5,6,7,8,9,10};

   int key =11;

   bool ans = search(arr,n,key);

   if(ans == true){
        cout<<"found"<<endl;
   }
   else{
        cout<<"not found"<<endl;
   }
   
   
}