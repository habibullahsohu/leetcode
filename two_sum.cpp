//Difficulty = Easy

#include <iostream>
using namespace std;
int main() {
     int nums[5] = {0,2,4,6,8};
        int a,b,sum;
        cout<<"Enter 1st Number: ";
        cin>>a;
        cout<<"Enter 2nd Number: ";
        cin>>b;
        sum=a+b;
        cout<<"Total Sum:"<<sum<<endl;
        for(int i=0;i<=10;i++){
            if(nums[i]==a){
                cout<<"["<<i<<",";
            }
        }
        for(int i=0;i<=10;i++){
            if(nums[i]==b){
                cout<<i<<"]";
                break;
            }
        }
    return 0;
}