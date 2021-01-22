#include <bits/stdc++.h>
using namespace std;

int a,b,c;

int sisa(int x,int n){
	if (x>=0) return x%n;
	else if (abs(x)%n==0) return 0;
	else return ((abs(x)/n)+1)*n+x;
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	cin >> a >> b >> c;
	b += c;
	cout << (sisa(b,a)==0?a:sisa(b,a)) << '\n';
	return 0;
}