#include<iostream>
using namespace std;

int main(){
    int arr[10]= {2,5,8,10};

    cout<<"address of 1st memory block is : "<<arr<<endl;
    cout<<"address of 1st memory block is : "<<&arr[0]<<endl;

    cout<<"4th : "<<*arr<<endl;
    cout<<"5th : "<<*arr+1<<endl;
    cout<<"6th : "<<*(arr+1)<<endl;
    cout<<"7th : "<<arr[2]<<endl;
    cout<<"8th : "<<*(arr+2)<<endl;

    int i =3;
    cout<<"9th : "<<i[arr]<<endl;
    cout<<"10th : "<<*(i+arr)<<endl;

    // ---------------------------------------------------------------------

    int temp[10];
    cout<<"Size temp : "<<sizeof(temp)<<endl; //40
    cout<<"Size *temp : "<<sizeof(*temp)<<endl; //4
    cout<<"Size &temp : "<<sizeof(&temp)<<endl; //8

    int *ptr = &temp[0];
    cout<<"Size ptr : "<<sizeof(ptr)<<endl; //8
    cout<<"Size *ptr : "<<sizeof(*ptr)<<endl; //4
    cout<<"Size &ptr : "<<sizeof(&ptr)<<endl; //8

    // --------------------------------------------------------------------------

    int a[20] ={1,2,3,4,5};
    cout<<"---> "<<&a[0]<<endl;

    int *p = &a[0];
    cout<<"---> "<<&p<<endl;

    // ----------------------------------------------------------------------------

    int array[10];

    // array = array +1  ------> Error

    int *pntr = &array[0];
    cout<<pntr<<endl;
    pntr = pntr +1;
    cout<<pntr<<endl;





}