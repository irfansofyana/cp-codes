#include <bits/stdc++.h>
using namespace std;

long long tc,n,i,j;
long long a,b;

long long sqr(long long a){
	return a*a;
}
long long pangkat(long long a,long long b){
	if (b==0) return 1;
	else if (b==1) return (a%10);
	else if (b%2==0) return sqr(pangkat(a,(b/2))%10)%10;
	else if (b%2==1) return ((a%10)*(sqr(pangkat(a,(b-1)/2)%10)%10));
}
int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> a >> b;
		cout << pangkat(a,b) << endl;
	}
	return 0;
}