#include <bits/stdc++.h>
using namespace std;

long long n,t,tc,m;
long long i,j;

int main(){
	cin >> t;
	while (t--) {
		cin >> n >> m;
		i = n*m;
		j = n-1;
		cout << "Kasus " << ++tc << ": " << (i*(i+1)-j*(j+1))/2 << '\n';
	}
	return 0;
}