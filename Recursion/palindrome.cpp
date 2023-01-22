#include <iostream>
using namespace std;

bool check_palindrome(string str , int i ,int j){
    // base case
    if(i>j)
        return true;

    if(str[i]!= str[j]){
        return false;
    }
    else{
        return check_palindrome(str ,  i+1 ,j-1);
    }

}

int main(){

    string name = "abba";
    bool isPalindrome = check_palindrome(name ,0 , name.length()-1);
    
    if (isPalindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}