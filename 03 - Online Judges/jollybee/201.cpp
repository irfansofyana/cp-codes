#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
string s;
int A,B;

int main(){
	OPTIMASI
	cin >> n >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]=='N' || s[i]=='E') A++;
		else B++;
	}
	cout << A << " " << B << '\n';
	if (A+min(B,n)>B+min(A,n)) {
		cout << 2*(A+min(B,n))-(int)s.size();
		int frek = 0;
		cout << " ";
		for (i = 0 ; i < s.size(); i++) {
			if (frek!=min(B,n)) {
				if (s[i]=='W') cout << 'E';
				else if (s[i]=='S') cout << 'N';
				else cout << s[i];
				frek++;
			}
			else {
				cout << s[i] ;
			}
		}
	}
	else {
		cout << 2*(B+min(A,n))-(int)s.size() ;
		int frek = 0;
		cout << " ";
		for (i = 0 ; i < s.size(); i++) {
			if (frek!=min(A,n)) {
				if (s[i]=='E') cout << 'W';
				else if (s[i]=='N') cout << 'S';
				else cout << s[i];
				frek++;
			}
			else {
				cout << s[i] ;
			}
		}
	}
	cout << '\n';
	return 0;
}