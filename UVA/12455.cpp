#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int t;
int banyak;
int A[25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> banyak;
		for (i = 0 ; i < banyak; i++) {
			cin >> A[i];
		}
		bool ans = false;
		for (i = 0 ; i < (1<<banyak); i++){
			int temp = 0;
			for (j = 0 ; j < banyak; j++) {
				if ((i&(1<<j))>0) temp += A[j];
			}
			if (temp==n) {
				ans = true;
				break;
			}
		}
		cout << (ans?"YES":"NO") << '\n';
	}
	return 0;
}