#include<iostream>
using namespace std;
int main(){
	cout<<"Enter number of rows and columns of first matrix"<<endl;
	int n,m;
	cin>>n;
	cin>>m;
	cout<<"Enter number of rows and columns of second matrix"<<endl;
	int a,b;
	cin>>a;
	cin>>b;
	if(m!=a){
		cout<<"Multiplication not possible";
	}
	else{
		cout<<"Enter elements of first matrix"<<endl;
		int mat1[n][m];
		for(int i = 0;i<n;i++){
			for(int j = 0; j<m;j++){
				cin>>mat1[i][j];
			}
		}
		cout<<"Enter elements of second matrix"<<endl;
		int mat2[a][b];
		for(int i = 0;i<a;i++){
			for(int j = 0; j<b;j++){
				cin>>mat2[i][j];
			}
		}
		int ans[n][b];
		for(int i = 0;i<n;i++){
			for(int j = 0; j<b;j++){
				ans[i][j]=0;
				for(int k = 0;k<m;k++){
					ans[i][j]+=mat1[i][k]*mat2[k][j];
				}
			}
		}
		cout<<"Multiplied matrix is:"<<endl;
		for(int i = 0;i<n;i++){
			for(int j = 0; j<b;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
