#include<iostream>
using namespace std;
/*Function Syntax
returnType functionName(parameter1 ,parameter2,..){
//Code Block
}*/

int factorial(int n){
    //Recursive function
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<"is "<<factorial(num);
}
