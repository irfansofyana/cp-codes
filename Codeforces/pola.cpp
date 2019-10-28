#include <bits/stdc++.h>
using namespace std;
int n,h,w,i,j;
char A[105][105];
string s;
int main(){
	cin>>w>>h;
	for (i=0;i<h;i++){
		for (j=0;j<w;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<w;i++){
		s="";
		for (j=0;j<h;j++){
			for (int k=1;k<=2;k++) {
				cout<<A[j][i];
				s=s+A[j][i];	
			}
		}
		cout<<endl;
		cout<<s<<endl;
	}
	return 0;
}
