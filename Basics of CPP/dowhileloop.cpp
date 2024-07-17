#include<iostream>
using namespace std;
int main(){
    //This code is for basic implementation of do-while loop it will continue loop until we give positive input.
    //Difference between while loop and do-while loop is while loop is pre condition where do-while loop is post condition which means do while loop will execute code block inside do{} and after that it will check condition.
    int num;
    cin>>num;
    do{
        cout<<num;
        cin>>num;
    }while(num>0);
    return 0;
}
