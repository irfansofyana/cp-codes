#include <bits/stdc++.h>
using namespace std;

int A[10005],pos[10005];
int n,i,j;
char c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n,n) {
		cin >> c;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			pos[A[i]] = i;
		}
		bool ans = true;
		for (i = 0 ; i < n-1 ; i++) {
			for (j = i+1 ; j < n; j++) {
				int beda = A[j]-A[i];
				int x = A[j]+beda;
				if (x>=0 && x<n && pos[x]>j) {
					ans = false;
					break;
				}
			}
			if (!ans) break;
		}
		cout << (ans==true?"yes":"no") << '\n';	
	}
	return 0;
}