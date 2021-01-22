#include <bits/stdc++.h>
using namespace std;
int b,w,i,j;
char A[10][10];
int main(){
	cin.tie(0); 
	for (i=0;i<8;i++){
		for (j=0;j<8;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<8;i++){
		for (j=0;j<8;j++){
			if (A[i][j]=='Q') w+=9;
			else if (A[i][j]=='R') w+=5;
			else if (A[i][j]=='B') w+=3;
			else if (A[i][j]=='N') w+=3;
			else if (A[i][j]=='P') w+=1;
			else if (A[i][j]=='q') b+=9;
			else if (A[i][j]=='r') b+=5;
			else if (A[i][j]=='b') b+=3;
			else if (A[i][j]=='n') b+=3;
			else if (A[i][j]=='p') b+=1;
		}
	}
	if (b==w) cout<<"Draw"<<endl;
	else if (b>w) cout<<"Black"<<endl;
	else cout<<"White"<<endl;
	return 0;
}
