#include <bits/stdc++.h>
using namespace std;

int a,b,k,x;

int f(int x){
	return abs(a*x+b);
}

int cari(int udah,int ans){
	if (udah==k) return ans;
	return cari(udah+1,f(ans));
}

int main(){
	cin >> a >> b >> k >> x;
	cout << cari(0,x) << '\n';
	return 0;
}