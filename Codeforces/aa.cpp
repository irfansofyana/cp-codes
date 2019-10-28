#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;
int a,b;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s >> a >> b;
		if (a >= 2400 && b > a) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}