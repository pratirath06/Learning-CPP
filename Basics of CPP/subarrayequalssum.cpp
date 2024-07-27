#include<iostream>
using namespace std;
int main(){
    //Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter sum"<<endl;
    int s;
    cin>>s;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++){
    int sum = 0;
        for(int j = i;j<n;j++){
            sum+=arr[j];
            if(sum>s){
                continue;
            }
            else if(sum==s){
                cout<<(i+1)<<" "<<(j+1)<<endl;
            }
        }
    }
}
