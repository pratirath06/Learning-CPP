#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    //Reverse the string using recursion
    if(s.length()!=0){
        reverse(s.substr(1));
        cout<<s[0];
    }
}
void replacepi(string s){
    //It will replace all the 'pi' in the string with '3.14'
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
void removeduplicate(string s){
    //If any element is repeated right after that position it'll remove that
    if(s.length()==0){
        return;
    }
    if(s[0]==s[1]){
        removeduplicate(s.substr(1));
    }
    else{
        cout<<s[0];
        removeduplicate(s.substr(1));
    }

}
void moveallx(string s){
    //Move all the 'x' in the string to the end of the string
    if(s.length()==0){
        return ;
    }
    if(s[0]=='x'){
        moveallx(s.substr(1));
        cout<<'x';
    }
    else{
        cout<<s[0];
        moveallx(s.substr(1));
    }
}
int main(){
    //Perform the particular function you want to.
}
