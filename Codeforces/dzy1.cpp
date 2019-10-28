#include <bits/stdc++.h>
using namespace std;
char A[110][110];
int n,m,i,j;

void ngisi(int x,int y){
	if (x%2==0){
		if (y%2==0) A[x][y]='B';
		else A[x][y]='W';
	}
	else{
		if (y%2==0) A[x][y]='W';
		else A[x][y]='B';
	}
}
int main(){
	cin>>n>>m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (A[i][j]=='.') ngisi(i,j);
			else A[i][j]='-';
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cout<<A[i][j];
		}
		cout<<endl;	
	}
}
