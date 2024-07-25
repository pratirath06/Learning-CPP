#include<iostream>
using namespace std;
int main(){
    //Sum of all the possible sub arrays of an array of int type.
    //Total number of subarrays possible is n(n+1)/2.
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++){
    int sum = 0;
        for(int j = i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}
