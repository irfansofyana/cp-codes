#include <bits/stdc++.h>
using namespace std;

int a,b,k,x;

int f(int x){
	return abs(a*x+b);
}

int main(){
	cin >> a >> b >> k >> x;
	int ans = x;
	for (int i = 1 ; i <= k ; i++) {
		ans = f(ans); 
	}
	cout << ans << '\n';
	return 0;
}