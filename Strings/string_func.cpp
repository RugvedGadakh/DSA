#include <iostream>
#include<cstring>
using namespace std;

int main(){

    char s1[20], s2[20];

    cin>>s1>>s2;

    int len_s1 =strlen(s1);
    int len_s2 =strlen(s2);

    cout<<"String lengths : "<<len_s1<<" & "<<len_s2<<endl;

    if(strcmp(s1,s2)==0){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    }
}