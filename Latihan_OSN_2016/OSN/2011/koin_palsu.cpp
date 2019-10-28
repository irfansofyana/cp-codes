#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
string s;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << "?\n";
	cout << "1 2 3\n"; 
	cout << "4 5 6\n"; 
	fflush(stdout);
	cin >> s;
	if (s=="SEIMBANG") {
		cout << "?\n";
		cout << "7\n";
		cout << "8\n"; fflush(stdout);
		cin >> s;
		if (s=="KIRI") {
			cout << "! 7\n" ; 
		}
		else {
			cout << "! 8\n"; 
		} 
	}
	else if (s=="KIRI") {
		cout << "?\n";
		cout << "1\n";
		cout << "2\n"; fflush(stdout);
		cin >> s;
		if (s=="KIRI") {
			cout << "! 1\n";// cout << flush;
		}
		else if (s=="KANAN") {
			cout << "! 2\n"; //cout << flush;
		}
		else cout << "! 3\n"; //cout << flush;
	}
	else if (s== "KANAN"){
		cout << "?\n";
		cout << "4\n";
		cout << "5\n"; fflush(stdout);
		cin >> s;
		if (s=="KIRI") {
			cout << "! 4\n"; //cout << flush;
		}
		else if (s=="KANAN") {
			cout << "! 5\n"; //cout << flush;
		}
		else cout << "! 6\n"; //cout << flush;
	}
	return 0;
}