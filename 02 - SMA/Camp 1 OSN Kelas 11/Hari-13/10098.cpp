#include <bits/stdc++.h>
using namespace std;

int n;
string s;
char A[12];

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		sort(s.begin(),s.end());
		for (int i = 0 ; i < s.size() ; i++)
			A[i] = s[i];
		do {
			for (int i = 0 ; i < (int)s.size() ; i++) 
				cout << A[i];
			cout << endl;
		} while (next_permutation(A,A+(int)s.size()));
		cout << endl;
	}
	return 0;
}