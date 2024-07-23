#include<iostream>
using namespace std;
int main(){
    int n,key,flag=0;
    cout<<"Enter no of elements in array"<<endl;
    cin>>n;
    cout<<"Enter key element"<<endl;
    cin>>key;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at "<<i<<" position";
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Element not found";
    }
}
