#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,x,sum;
ll A[100005];
char perintah;

int modulo(int x,int n){
	if (x >= 0) return x%n;
	else {
		int xx = abs(x);
		if (xx%n==0) return 0;
		else {
			xx /= n; xx++;
			return n*xx + x;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) 
		cin >> A[i];
	while (m--) {
		cin >> perintah >> x;
		if (perintah == 'C') sum -= x;
		else if (perintah == 'A') sum += x;
		else {
			x--;
			cout << A[modulo(x-sum,n)] << '\n';
		}
	}
	return 0;
}