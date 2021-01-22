#include <bits/stdc++.h>
using namespace std;

int r,c,i,j;
char A[100][100];

bool masih_ada(){
	for (int _z=0;_z<r;_z++){
		int temp = 0;
		for (int _y=0;_y<c;_y++)
			if (A[_z][_y]=='1') temp++;
		if (temp == c) return true; 
	}
	return false;
}
void lakukan(){
	int banyak,runtuh,maks=-100000,pos;
	for (int it=0;it<r;it++) {
		banyak = 0;
		for (int itt=0;itt<c;itt++) 
			if (A[it][itt]=='1') banyak++;
		if (banyak==c) {
			for (int itt=0;itt<c;itt++) A[it][itt]='0';
			if (it>maks) maks = it;
		}
	}
	for (int it=0;it<c;it++){
		runtuh = 0;
		for (int itt=0;itt<maks;itt++){
			if (A[itt][it]=='1') runtuh++;
		}
		pos = r-1;
		for (int itt=maks;itt<r;itt++) {
			if (A[itt][it]=='1') {
				pos = itt-1;
				break;
			}
		}
		while (runtuh>0) {
			A[pos][it] = '1';
			pos--;
			runtuh--;
		}
		for (int itt=0;itt<=pos;itt++) A[itt][it]='0';
	}
}
int main(){
	cin >> r >> c;
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			cin >> A[i][j];
	while (masih_ada())
		lakukan();
	for (i=0;i<r;i++){
		for (j=0;j<c;j++)
			cout<<A[i][j];
		cout<<"\n";
	}
	return 0;
}