#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main(){
	cin >> n;
	if ((n&(n-1))==0) puts("ya");
	else puts("bukan");
	return 0;
}