#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int r,b,g;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i] == 'R') r++;
		else if (s[i] == 'B') b++;
		else if (s[i] == 'G') g++;
	}
	if (r >= 1 && b >= 1 && g >= 1) cout << "BGR\n";
	else if (b == 0 && g==0 || b == 0 && r == 0 || g == 0 && r ==0) {
		if (b == 0 && g == 0) cout << "R\n";
		else if (b == 0 && r == 0) cout << "G\n";
		else cout << "B\n";
	}
	else {
		if (b == 0) {
			if (r >= 2 && g >= 2) cout << "BGR\n";
			else if (r >= 2 && g == 1) cout << "BG\n";
			else if (r == 1 && g >= 2) cout << "BR\n";
			else cout << "B\n";
		}
		else if (r == 0) {
			if (b >= 2 && g >= 2) cout << "BGR\n";
			else if (b >= 2 && g == 1) cout << "GR\n";
			else if (b == 1 && g >= 2) cout << "BR\n";
			else cout << "R\n";
		}
		else if (g == 0) {
			if (b >= 2 && r>=2) cout << "BGR\n";
			else if (b >= 2 && r == 1) cout << "GR\n";
			else if (b == 1 && r >= 2) cout << "BG\n";
			else cout << "G\n";
		}
	}
	return 0;
}