#include <iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e, int key){
    //base case
    if(s>e)
        return false;

    int mid = s+(e-s)/2;

    if(arr[mid]==key)
        return true;

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }



}

int main(){
   
   int n = 10;
   int arr[10] = {1,2,8,4,5,6,7,8,9,10};

   int key =11;

   bool ans = binarySearch(arr,0,n,key);

   if(ans == true){
        cout<<"found"<<endl;
   }
   else{
        cout<<"not found"<<endl;
   }
   
   
}