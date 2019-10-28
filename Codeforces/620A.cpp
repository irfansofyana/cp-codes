#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	cin >> c >> d;
	cout << max(abs(a-c),abs(b-d)) << '\n';
	return 0;
}