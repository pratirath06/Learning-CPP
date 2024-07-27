#include<iostream>
using namespace std;
int main(){
    //Find the smallest positive missing number in the given array.
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;6
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    const int N = 1e6+2;
    bool arr1[N];
    for(int i = 0;i<N;i++){
        arr1[i]=false;
    }
    for(int i = 0; i<n;i++){
        if(arr[i]<0){
            continue;
        }
        else{
            int x = arr[i];
            arr1[x]=true;
        }
    }
    for(int i = 0;i<N;i++){
        if(arr1[i]==false){
            cout<<"Smallest positive integer missing is:"<<i;
            break;
        }
    }
}
