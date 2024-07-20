#include<iostream>
using namespace std;
int main(){
    //This code checks whether a given number is armstrong number or not
    int num,temp,rem,x=0;
    cin>>num;
    temp=num;
    while(temp>0){
        rem=temp%10;
        temp/=10;
        x=x+rem*rem*rem;
    }
    if(x==num){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
}
