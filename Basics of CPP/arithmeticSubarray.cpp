#include<iostream>
using namespace std;
int main(){
    //Prints length of longest contiguos arithmetic subarray
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2,pd=arr[1]-arr[0],tempmax=2;
    for(int i=2; i<n;i++){
        if(pd==arr[i]-arr[i-1]){
            tempmax+=1;
        }
        else{
            pd=arr[i]-arr[i-1];
            tempmax=2;
        }
        ans=max(ans,tempmax);

    }
    cout<<ans;
}
