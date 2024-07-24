#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n;
    while(end>=start){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter element to be found"<<endl;
    cin>>key;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    if(binarysearch(arr,n,key)==-1){
        cout<<"Not found";
    }
    else{
        cout<<"Element found at "<<binarysearch(arr,n,key)<<" position";
    }
}
