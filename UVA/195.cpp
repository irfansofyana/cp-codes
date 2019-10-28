#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s;
int A[105];
int n,i,j;

int main(){
	OPTIMASI
	cin >> n;
	while (n--) {
		cin >> s;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]>='a' && s[i]<='z') A[i] = (int)s[i]-'a';
			else A[i] = (int)s[i]-'A'+26;
		}
		int m = s.size();
		do {
			for (i = 0 ; i < m ; i++) {
				if (A[i]>=0 && A[i]<=25) cout << char(A[i]+'a');
				else cout << char(A[i]+'A'-26);
			}
			cout << '\n';
		}while (next_permutation(A,A+m));
	}
	return 0;
}