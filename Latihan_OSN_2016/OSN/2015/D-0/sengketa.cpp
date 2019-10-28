#include <bits/stdc++.h>
using namespace std;

string s;
int n,m,i,j;
int A[1005][1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	for (i = a ; i <= c-1; i++) {
		for (j = b ; j <= d-1; j++) {
			A[i][j]++;
		}
	}
	cin >> a >> b >> c >> d;
	for (i = a ; i <= c-1; i++) {
		for (j = b ; j <= d-1; j++) {
			A[i][j]++;
		}
	}
	for (i = 0 ; i <= 1000; i++) {
		for (j = 0 ; j <= 1000 ; j++){
			if (A[i][j] > 1) {
				cout << "SENGKETA\n";
				return 0;
			}
		}
	}
	cout << "DAMAI\n";
	return 0;
}