#include <bits/stdc++.h>
using namespace std;

int A[15][15];
int n,m,i,j;
string s;

void reset(){
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n; j++)
			v[i].push_back(A[i][j]);
}

void atas(){
	vector<int> v[15];
	reset();
	for (i = 0 ; i < n ; i++){
		if (i==n-1) {
			for (j = 0 ; j < n; j++) 
				A[i][j] = v[0][j];
		} 
		else {
			for (j = 0 ; j < n ; j++) 
				A[i][j] = v[i+1][j];
		}
	}
}

void bawah(){
	vector<int> v[15];
	reset();
	for (i = 0 ; i < n ; i++) {
		if (i==0) {
			for (j = 0 ; j < n ; j++)
				A[i][j] = v[n-1][j];
		}
		else {
			for (j = 0 ; j < n ; j++) 
				A[i][j] = v[i-1][j];
		}
	}
}

void kanan(){
	vector<int> v[15];
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++) {
			v[i][j] = A[j][i];
		}
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		for (j = 0; j < n ; j++)
			cin >> A[i][j];
	cin >> s;
	for (i = 0 ; i < s.size(); i++)
		
	return 0;
}