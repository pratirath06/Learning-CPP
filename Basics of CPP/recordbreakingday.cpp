#include<iostream>
using namespace std;
int main(){
/*Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi

. A day is record breaking if it

satisfies both of the following conditions:
● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.*/
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT32_MIN;
    int count=0;
    for(int i=0; i<n;i++){
        if(arr[i]>ans){
            if(i==n-2){
                count+=1;
            }
            else if(arr[i]>arr[i+1]){
                count+=1;
            }
        }
        ans=max(ans,arr[i]);
    }
    cout<<count;
}
