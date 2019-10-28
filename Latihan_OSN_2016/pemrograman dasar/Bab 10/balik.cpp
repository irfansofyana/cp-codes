#include <bits/stdc++.h>
using namespace std;

int a,b;

int balik(int x){
	int temp = x;
	int ret = 0;
	while (temp > 0) {
		ret = (10 * ret) + (temp%10);
		temp /= 10;
	}
	return ret;
}

int main(){
	cin >> a >> b;
	a = balik(a); b = balik(b);
	a += b;
	cout << balik(a) << '\n';
	return 0;
}