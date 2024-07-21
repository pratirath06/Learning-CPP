#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c){
            if(a*a==b*b+c*c){
                cout<<"Pythogorian Triplet";
            }
            else{
                cout<<"Not Pythogorian Triplet";
            }
        }
        else{
            if(c*c==b*b+a*a){
                cout<<"Pythogorian Triplet";
            }
            else{
                cout<<"Not Pythogorian Triplet";

            }
        }
    }
    else{
        if(b>c){
            if(b*b==a*a+c*c){
                cout<<"Pythogorian Triplet";
            }
            else{
                cout<<"Not Pythogorian Triplet";
            }
        }
        else{
            if(c*c==b*b+a*a){
                cout<<"Pythogorian Triplet";
            }
            else{
                cout<<"Not Pythogorian Triplet";

            }
        }
    }
    return 0;
}
