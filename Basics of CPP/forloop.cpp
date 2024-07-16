#include<iostream>
using namespace std;
int main(){
    //This code is for basic implementation of for loop by printing multiplication table
    int num;
    cin>>num;
    for(int i=1;i<11;i++)//As seen there are three arguments inside for loop and they are (initialization;condition;update)
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}
