#include<iostream>
using namespace std;
int main(){
	//Transpose of n*n matrix
	int n;
	cout<<"Enter number of rows/columns of square matrix"<<endl;
	cin>>n;
	int arr[n][n];
	cout<<"Enter elements of the matrix"<<endl;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			if(i!=j){
				arr[i][j]+=arr[j][i];
				arr[j][i]=arr[i][j]-arr[j][i];
				arr[i][j]-=arr[j][i];
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
