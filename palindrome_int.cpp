#include <iostream>
using namespace std;

int main(){
    int user_input=0,rev_input=0,last_digit,original;
    cout<<"Enter Your Number:";
    cin>>user_input;
    original=user_input;
    while(user_input>0){
        last_digit = user_input % 10;
        rev_input = (rev_input*10)+last_digit;
        user_input = user_input/10;
    }
    if(original==rev_input){
        cout<<"Number is palindrome\n";
    }
    else{
        cout<<"Number is not palindrome\n";
    }
    return 0;
}