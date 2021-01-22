#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int m,c;
int x,y;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (x > y) m++;
		else if (x < y) c++;
	}
	if (m > c) cout << "Mishka\n";
	else if (m < c) cout << "Chris\n";
	else cout << "Friendship is magic!^^\n";
	return 0;
}
