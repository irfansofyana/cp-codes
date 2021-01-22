#include <bits/stdc++.h>
using namespace std;

int n,i,j;
char A[6][20];
int idx,idy;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=1;i<=4;i++){
		if (i==3) {
			A[i][0] = '#';
			for (j=1;j<11;j++) A[i][j] = '.';
		}
		else for (j=0;j<11;j++) A[i][j] = '#';
	}
	idx = 1;
	idy = 0;
	while (n>0) {
		A[idx][idy]='O';
		n--;
		if (idx==2 && idy!=0) idx = 4;
		else if (idx==4) {
			idx = 1;
			idy ++;
		}
		else idx++;
 	}
	for (i=0;i<6;i++){
		if (i==0||i==5) {
			for (j=0;j<26;j++) {
				if (j==0 || j==25) cout <<'+';
				else cout<<'-';
			}
		}
		else if (i==3) {
			cout<<'|';
			for (j=0;j<11;j++) {
				if (j==0 && n>=1) {
					n--;
					cout << A[i][j] << '.';
				}
				else if (j==0) cout<<A[i][j]<<'.';
				else cout<<A[i][j]<<'.';
			}
			cout<<"..|";
		}
		else {
			cout<<'|';
			for (j=0;j<11;j++) {
				if (n>=1) {
					cout<<A[i][j]<<'.';
					n--;
				}
				else cout<<A[i][j]<<'.';
			}
			cout<<'|';
			if (i==1 || i==4) {
				if (i==1) cout<<"D|)";
				else cout<< ".|)";
			}
			else cout<<".|";
		}
		cout<<endl;
	} 
}
