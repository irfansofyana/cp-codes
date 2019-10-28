#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int lo,hi;
string s;
int ans,mid;

int main(){
	lo = 1; hi = 1000000;
	while (lo < hi) {
		mid = (lo + hi + 1)/2;
		cout << mid << '\n';
		fflush(stdout);
		cin >> s;
		if (s == ">=") {
			lo = mid;
		}
		else if (s == "<") {
			hi = mid - 1;
		}
	}
	cout << "! " << lo << '\n';
	return 0;
}