#include <iostream>
using namespace std;

int distWays(int n){
    //base case
    if(n<0)
        return 0;
    
    if(n==0)
        return 1;

    int ans= distWays(n-1) + distWays(n-2);

    return ans;
    
}

int main(){
   int n;
   cin>>n;

   int ans = distWays(n);
   cout<<ans<<endl;

   
}