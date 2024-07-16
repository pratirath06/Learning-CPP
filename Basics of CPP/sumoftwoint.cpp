#include<iostream>
using namespace std;
int main(){
    int amount1;
    cin>>amount1; //Input first integer
    int amount2;
    cin>>amount2; //Input second integer
    int sum = amount1 + amount2; //Addition of both previous variables
    cout<<sum<<endl; //Printing Sum variable
    return 0;
    //For cout we are using "<<" which is insertion operator and for cin we are using ">>" which is extraction operator.
    //cout belongs to the ostream i.e. output stream part of iostream header file and cin belongs to the istream i.e. input stream part of iostream header file.
}
