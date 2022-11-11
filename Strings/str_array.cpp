#include <iostream>
using namespace std;


char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}


bool checkPalindrome(char a[] , int n){

    int s =0;
    int e = n-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i =0;name[i]!='\0'; i++){
        count++;
    }
    return count;
}

char getMaxOccChar(string s){

    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num=0;

        if(ch>='a' && ch<='z'){
            num = ch-'a';
        }
        else{
            num = ch-'A';
        }

        arr[num]++;
    }
    int maxi = -1 , ans =0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans =i;
            maxi=arr[i];
        }
    }

    char finalAns = 'a'+ ans;

    return finalAns;

}

int main(){

    char name[20];
    cout<<"Entre Your Name : "<<endl;
    cin>>name;

    cout<<"Your Name is : "<<name<<endl;
    cout<<"Name Length is : "<<getLength(name)<<endl;

    // name[3]= '\0';

    // cout<<"Name  after putting null at index 3 : "<<endl;
    cout<<"Your Name is : "<<name<<endl;
    int len =getLength(name);
    reverse(name,len);
    cout<<"Your Name in reverse is : "<<name<<endl;

    cout<<"Palindrome or not : "<<checkPalindrome(name,len)<<endl;

    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;
}