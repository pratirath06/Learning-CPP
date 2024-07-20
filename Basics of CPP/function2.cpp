#include<iostream>
using namespace std;
/*Function Syntax
returnType functionName(parameter1 ,parameter2,..){
//Code Block
}*/

bool isprime(int num){
    for(int j = 2;j<(num/2)+1;j++){
        if(num%j==0){
                return false;
        }
    }
    return true;
}
int main(){
    int num1,num2;
    cout<<"Enter two number:"<<endl;
    cin>>num1;
    cin>>num2;
    for(int i=num1;i<num2;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
}
