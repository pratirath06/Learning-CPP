#include<iostream>
using namespace std;
#include<string>
void permutation(string str,string ans){
    //Finding permutation of a string using recursion.
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<str.length();i++){
        string res=str.substr(0,i)+str.substr(i+1);
        permutation(res,ans+str[i]);
    }
}
int main(){
    string s;
    cout<<"Enter the string you want permutation of:"<<endl;
    getline(cin,s);
    permutation(s,"");
}
