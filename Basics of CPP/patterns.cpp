#include<iostream>
using namespace std;
int main(){

//Printing Pattern
/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *


    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        if(i<=n){
            for(int j=1;j<=2*n;j++){
                if(j<=i||j>2*n-i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        }
        else{
            for(int j=2*n;j>=1;j--){
                if(j>=i||j<2*n-i+2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
*/

/*
*
**
***
****
*****

    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/
/*
    *
   **
  ***
 ****
*****
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(j<num-i+1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;

    }*/

/*
1
22
333
4444
55555
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
             cout<<i;
        }
        cout<<endl;
    }*/

/*
    *
   * *
  * * *
 * * * *
* * * * *
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int count=0;
        for(int j=1;j<=2*num;j++){
            if(j<=num-i){
                cout<<" ";
            }
            else if(j<=num+i){
                if(count%2==0){
                    cout<<"*";
                    count++;
                }
                else{
                    cout<<" ";
                    count++;
                }
            }
        }
        cout<<endl;
    }*/


/*
* * * * *
 * * * *
  * * *
   * *
    *
    int num;
    cin>>num;
    for(int i =num;i>=1;i--){
        int count=0;
        for(int j=1;j<=2*num;j++){
            if(j<=num-i){
                cout<<" ";
            }
            else if(j<=num+i){
                if(count%2==0){
                    cout<<"*";
                    count++;
                }
                else{
                    cout<<" ";
                    count++;
                }
            }
        }
        cout<<endl;
    }*/


/*
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
    int num;
    cin>>num;
    for(int i=1;i<=2*num-1;i++){
        int count=0;
        if(i<=num){
            for(int j=1;j<=2*num;j++){
                if(j<=num-i){
                    cout<<" ";
                }
                else if(j<=num+i){
                    if(count%2==0){
                        cout<<"*";
                        count++;
                    }
                    else{
                        cout<<" ";
                        count++;
                    }
                }
            }
        }
        else{
            for(int j=1;j<=2*(num-1);j++){
                if(j<=i-num){
                    cout<<" ";
                }
                else if(j<=(2*num)-(i%num)-1){
                    if(count%2==0){
                        cout<<"*";
                        count++;
                    }
                    else{
                        cout<<" ";
                        count++;
                    }
                }
            }
        }
        cout<<endl;
    }*/
    return 0;
}
