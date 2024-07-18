#include<iostream>
using namespace std;
int main(){
    //This code provides understanding of switch loop
    //Switch loop helps to differentiate between scenarios and run code easily for different values another way to do it is using if condition but it is comparatively lengthy and complex
    //We are using break statement after every case otherwise it will run every other command after satisfied case.
    char x;
    cout<<"Enter a character"<<endl;
    cin>>x;
    switch(x){
        case'a':
            cout<<"It is a vowel.";
            break;
        case'e':
            cout<<"It is a vowel.";
            break;
        case'i':
            cout<<"It is a vowel.";
            break;
        case'o':
            cout<<"It is a vowel.";
            break;
        case'u':
            cout<<"It is a vowel.";
            break;
        default:
            cout<<"It is not a vowel.";
            break;
    }
}
