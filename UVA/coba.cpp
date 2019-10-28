#include <bits/stdc++.h>
using namespace std;

int q;
long long ans;

int main(){
	cin >> q;
	ans = ((long long)q*(q-1))/2;
	cout << ans << '\n';
	return 0;
}
