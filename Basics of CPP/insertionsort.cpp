#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            arr[j-1]+=arr[j];
            arr[j]=arr[j-1]-arr[j];
            arr[j-1]=arr[j-1]-arr[j];
            j-=1;
        }
    }
    cout<<"Sorted array is:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
