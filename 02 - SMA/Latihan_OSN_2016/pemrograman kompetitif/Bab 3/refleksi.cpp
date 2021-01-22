#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[80][80],B[80][80];

bool identik(){
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++)
			if (A[i][j]!=B[i][j]) return false;
	}
	return true;
}

bool horisontal(){
	int roww = n-1;
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < n ; j++) {
			if (B[i][j]!=A[roww][j]) return false;
		}
		roww--;
	}
	return true;
}

bool vertikal(){
	int kol ;
	for (i = 0 ; i < n ; i++){
		kol = n-1;
		for (j = 0 ; j < n ; j++) {
			if (B[i][j]!=A[i][kol]) return false;
			else kol--;
		}
	}
	return true;
}

bool kanan_bawah(){
	int roww,kol;
	kol = 0;
	for (i = 0 ; i < n ; i++) {
		roww = 0;
		for (j = 0 ; j < n ; j++) {
			if (B[i][j]!=A[roww][kol]) return false;
			else roww++;
		}
		kol++;
	}
	return true;
}

bool kiri_bawah(){
	int roww,kol;
	kol = n-1;
	for (i = 0 ; i < n ; i++) {
		roww = n-1;
		for (j = 0 ; j < n ; j++) {
			if (B[i][j]!=A[roww][kol]) return false;
			else roww--;
		}
		kol--;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) 
		for (j = 0 ; j < n ; j++)
			cin >> A[i][j];
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++)
			cin >> B[i][j];
	if (identik()) cout << "identik";
	else if (horisontal()) cout << "horisontal";
	else if (vertikal()) cout << "vertikal";
	else if (kanan_bawah()) cout << "diagonal kanan bawah";
	else if (kiri_bawah()) cout << "diagonal kiri bawah";
	else cout << "tidak identik";
	cout << '\n';
	return 0;
}