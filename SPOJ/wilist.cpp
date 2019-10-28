#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if ((n&(n-1))==0) puts("TAK");
	else puts("NIE");
	return 0;
}