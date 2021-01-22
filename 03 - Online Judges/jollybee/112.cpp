#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		i = 0 ;
		bool ans = true;
		while (i<n) {
			j = i+1; int frek = 1;
			while (A[j]==A[i] && j < n) {
				frek++; j++;
			}
			if (frek>=3) {
				ans = false;
				break;
			}
			i = j;
		}
		cout << (ans?"YA":"TIDAK") << '\n';
	}
	return  0;
}