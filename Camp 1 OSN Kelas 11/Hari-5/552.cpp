#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int A[105][105];
int n,i,j,ans;

int main(){
	cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d;
		a--; b--; c--; d--; //indeks nol
		for (i = a ; i <= c ; i++) {
			for (j = b ; j<= d ; j++) 
				A[i][j]++;
		}
	}
	for (i = 0; i < 100 ; i++) {
		for (j = 0 ; j < 100 ; j++)
			ans+= A[i][j];
	}
	cout << ans << endl;
	return 0;
}