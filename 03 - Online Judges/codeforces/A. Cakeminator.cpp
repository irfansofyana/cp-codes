#include <bits/stdc++.h>
using namespace std;

int r,c,i,j;
char A[20][20];

bool ngecek(int p,int q){
	bool a,b;
	int i,j;
	a=true;
	for (i=0;i<c;i++){
		if (A[p][i]=='S'){
			a=false;
		}
	}
	b=true;
	for (j=0;j<r;j++){
		if (A[j][q]=='S'){
			b=false;
		}
	}

	return (a||b);
}
int main(){
	int jawab;
	cin>>r>>c;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++) cin>>A[i][j];
	}
	jawab=0;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			if ((A[i][j]!='S') && (ngecek(i,j))){
				jawab++;
			}
		}
	}
	cout<<jawab<<endl;
	return 0;
}
