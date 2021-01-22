#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int a = (int)s[0]-'a';
	int b = (int)s[1]-'1';
	int ans = 0;
	for (int i = 0 ; i < 8; i++) {
		if (a + dx[i] >= 0 && a+dx[i] < 8 && b + dy[i] >= 0 && b + dy[i] < 8) ans++;
	}
	cout << ans << '\n';
	return 0;
}
