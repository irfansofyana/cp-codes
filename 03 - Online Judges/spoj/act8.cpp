#include <bits/stdc++.h>
using namespace std;

int row,colom,sizee;
int testcases;

inline void print(){
	int nowr = 1;
	while (nowr <= sizee) {
		int ite = colom;
		while (ite--) {
			for (int i = 1 ; i <= sizee-nowr; i++) cout << '.';
			cout << '/';
			for (int i = 1 ; i <= 2*(nowr-1); i++) cout << '*';
			cout << '\\';
			for (int i = 1 ; i <= sizee-nowr; i++) cout << '.';
		}
		cout << '\n';
		nowr++;
	}
	nowr = 1;
	while (nowr <= sizee) {
		int ite = colom;
		while (ite--) {
			for (int i = 1 ; i <= nowr-1; i++) cout << '.';
			cout << '\\';
			for (int i = 1 ; i <= 2*(sizee-nowr); i++) cout << '*';
			cout << '/';
			for (int i = 1 ; i <= nowr-1; i++) cout << '.';
		}
		cout << '\n';
		nowr++;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> testcases;
	
	while (testcases--) {
		cin >> row >> colom >> sizee;
		for (int ii = 1 ; ii <= row; ii++) 
			print();
		if (testcases > 0) cout << '\n';
	} 
	return 0;
}