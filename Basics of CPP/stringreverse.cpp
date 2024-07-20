#include <iostream>
using namespace std;
int main(){
    //This code reverses a numerical string
    int num,temp,x=0;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    temp=num;
    while(temp>0){
        x=x*10+(temp%10);
        temp/=10;
    }
    cout<<x;
}
