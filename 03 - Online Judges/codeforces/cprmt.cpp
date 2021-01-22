#include <bits/stdc++.h>
using namespace std;

string a, b;
int fa[30], fb[30];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> b){
		for (int i = 0; i < a.size(); i++)
			fa[a[i]-'a']++;
		for (int i = 0 ; i < b.size(); i++)
			fb[b[i]-'a']++;  
		string res = "";
		for (int i = 0 ; i < 26; i++) {
			for (int j = 0 ; j < min(fa[i], fb[i]); j++)
				res = res + char(i + 'a');
		} 
		cout << res << '\n';
		memset(fa, 0, sizeof fa);
		memset(fb, 0, sizeof fb);
	}
	return 0;
}