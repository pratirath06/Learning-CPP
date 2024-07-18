#include<iostream>
using namespace std;
int main(){
    //This code provides understanding of break statement
    //This is basic game where you have to enter odd numbers, the moment you enter an even number break statement will execute and end the while loop.
    //Also we used while condition as "i" whose value is one which is true so without break statement this would have been an infinite loop
    int num,score = 0,i = 1;
    cout<<"Enter only Odd numbers\n";
    while(i){
        cout<<"Current Score:"<<score<<endl;
        cin>>num;
        if(num%2==0){
            break;
        }
        score+=1;
    }
    cout<<"You entered an even number\nYour final score is"<<score<<endl;
    return 0;
}
