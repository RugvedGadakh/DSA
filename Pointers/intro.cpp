#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;
    // adress and operator --> &

    cout<<"Address of num is : "<<&num<<endl;

    int *ptr = &num;

    cout<<"address is : "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;

    cout<<"size of integer is : "<<sizeof(num)<<endl;
    cout<<"size of pointer is : "<<sizeof(ptr)<<endl;


    // before adding 1 :
    cout<<"Before adding - integer: "<<num<<endl;
    cout<<"Before adding - pointer: "<<*ptr<<endl;

    // after adding 
    (*ptr)++;
    cout<<"after adding - integer: "<<num<<endl;
    cout<<"after adding - pointer: "<<*ptr<<endl;

    // coping pointer to other pointer
    int *q = ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    num = num+1;
    cout<<"after adding - integer: "<<num<<endl;
    cout<<"after adding - pointer: "<<*ptr<<endl;

    cout<<"Address of num is : "<<&num<<endl;
    cout<<"address is : "<<ptr<<endl;

}
