#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                arr[i]+=arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
