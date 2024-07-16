#include<iostream>
using namespace std;
int main(){
    //This code prints fibbionacci series using iteration till user given terms of fibbionacci series
    int prev1=0;
    int prev2=1;
    int num;
    cin>>num;
    if(num<=0){
        cout<<"Invalid";
    }
    else if(num==1){
        cout<<prev1;
    }
    else{
        cout<<prev1<<endl;
        cout<<prev2<<endl;
        for(int iter = 2;iter<num;iter++){
            int sum = prev1 + prev2;
            cout<<sum<<endl;
            prev1=prev2;
            prev2=sum;
        }
    }
    return 0;
}
