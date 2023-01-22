#include <iostream>
using namespace std;

void reachHome(int src , int dest){

    cout<<"source : "<<src<<" Destination : "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"reached"<<endl;
        return;
    }

    src++;
    reachHome(src,dest);
        

    
}

int main(){
   int src = 1;
   int dest = 10;

   reachHome(src,dest);

   
}