#include <bits/stdc++.h>
#define OPTIMASI ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n,t,i,j;
string marina,vasya;
string ans;
int udah,sisa;

char cari(char a,char b){
	if (a == b) {
		int x = (int)a;
		x  -= (int)'a';
		return char((int)'a' + (x+1)%26);
	}
	else {
		int x = (int)a;
		int y = (int)b;
		x -= (int)'a'; y -= (int)'a';
		int xx = (x+y)/2;
		if (xx == min(x,y)) xx  = (xx+2)%26; 
		return char((int)'a' + xx);
	}
}

int main(){
	OPTIMASI;
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> t;
	cin >> marina >> vasya;
	ans = "";
	if (t > n) {
		cout << -1 << '\n';
		return 0;
	}
	else {
		for (i = 0 ; i < marina.size(); i++){
			if (marina[i] == vasya[i]) {
				ans = ans+marina[i];
				udah++;
			}
			else {
				ans = ans + '#';
				sisa++;
			}
		}
		if (sisa == t) {
			for (i = 0 ; i < ans.size(); i++){
				if (ans[i] == '#') {
					ans[i] = cari(marina[i],vasya[i]);
				}
			}
			cout << ans << '\n';
		}
		else if (t > sisa) {
			for (i = 0 ; i < ans.size() && t > 0; i++) {
				if (ans[i]=='#') {
					t--;
					ans[i] = cari(marina[i],vasya[i]);
				}
			}
			for (i = 0 ; i < ans.size() && t > 0 ; i++){
				if (marina[i] == vasya[i]) {
					t--;
					ans[i] = cari(marina[i],vasya[i]);
				}
			}
			cout << ans << '\n';
		}
		else {
			if (2*t < sisa) {
				cout << -1 << '\n';
				return 0;
			}
			else {
				int cnt = 2*(sisa-t);
				bool gilir = true;
				for (i = 0 ; i < ans.size(); i++){
					if (ans[i] == '#') {
						if (gilir) {
							gilir = false;
							ans[i] = marina[i];
						}
						else {
							gilir = true;
							ans[i] = vasya[i];
						}
						cnt--;
						if (cnt == 0) break;
					}
				}
				for (j = i+1 ; j < ans.size(); j++){
					if (ans[j] == '#') {
						ans[j] = cari(marina[j],vasya[j]);
 					}
				}
				cout << ans << '\n';
			}
		}
	}
	return 0;
} 