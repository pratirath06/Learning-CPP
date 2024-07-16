#include<iostream>
using namespace std;
int main(){
    //This code takes 4 integer inputs and prints largest integer
    //This code is for understanding of if-else if-else statements
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a>b){
        if(a>c){
            if(a>d){
                cout<<"a";
            }
            else if(a==d){
                cout<<"a and d";
            }
            else{
                cout<<"d";
            }
        }
        else if (a==c){
            if(a>d){
                cout<<"a and c";
            }
            else if(a==d){
                cout<<"a, c and d";
            }
            else{
                cout<<"d";
            }
        }
        else{
            if(c>d){
                cout<<"c";
            }
            else if(c==d){
                cout<<"c and d";
            }
            else{
                cout<<"d";
            }
        }
    }
    else if(a==b){
        if(a>c){
            if(a>d){
                cout<<"a and b";
            }
            else if(a==d){
                cout<<"a, b and d";
            }
            else{
                cout<<"d";
            }
        }
        else if (a==c){
            if(a>d){
                cout<<"a, b and c";
            }
            else if(a==d){
                cout<<"a, b, c and d";
            }
            else{
                cout<<"d";
            }
        }
        else{
            if(c>d){
                cout<<"c";
            }
            else if(c==d){
                cout<<"c and d";
            }
            else{
                cout<<"d";
            }
        }

    }
    else{
        if(b>c){
            if(b>d){
                cout<<"b";
            }
            else if(b==d){
                cout<<"b and d";
            }
            else{
                cout<<"d";
            }
        }
        else if (b==c){
            if(b>d){
                cout<<"b and c";
            }
            else if(b==d){
                cout<<"b, c and d";
            }
            else{
                cout<<"d";
            }
        }
        else{
            if(c>d){
                cout<<"c";
            }
            else if(c==d){
                cout<<"c and d";
            }
            else{
                cout<<"d";
            }
        }
    }
    return 0;
}
