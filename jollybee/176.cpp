#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,A[100005],i;
map<ll,int> mep;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++){
		cin >> A[i];
		mep[A[i]]++;
	}
	for (i = 0 ; i < n ; i++) {
		if (mep[A[i]]>=2) {
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}