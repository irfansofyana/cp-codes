#include <bits/stdc++.h>
using namespace std;


long long t,n,i,j,k;
long long A[1000005];

void isi(){
	A[1] = 1; 
	for (i = 2 ; i <= 1000000; i++) { 
		j = i-1; 
		A[i] = A[i-1] + i + (i*(i-1))/2 + (j%2==0 ? ((j/2)*((j/2)+1)) : ((j+1)/2)*((j+1)/2));
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << A[n] << '\n';
	}
	return 0;
}