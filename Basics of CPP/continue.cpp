#include<iostream>
using namespace std;
int main(){
    //This code provides understanding of continue statement
    //Continue loop ignores rest of the current iteration or left program in the block and jumps to the next iteration.
    //This code prints all the number under 100 which are not divisible by 3.
    int i = 1;
    for(i=1;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
