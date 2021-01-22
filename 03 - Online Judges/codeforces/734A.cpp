#include <bits/stdc++.h>

using namespace std;

string s;
int a, d;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n >> s;
	for(int i = 0 ; i < n ; i++) {
		if (s[i] == 'A') a++;
		else d++;
	} 
	if (a == d) cout << "Friendship\n";
	else if (a > d) cout << "Anton\n";
	else cout << "Danik\n";
	return 0;	
}