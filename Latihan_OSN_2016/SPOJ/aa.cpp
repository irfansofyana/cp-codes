#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main(){
	cin >> n;
	if (n%3==0) cout << (n/3)*2 << '\n';
	else cout << (n/3)*2 + 1 << '\n';
	return 0;
}