#include <bits/stdc++.h>
using namespace std;

int n,i,j,pos,pos_maks;
int awal,ans,akhir,simpan;
string s;

int pindah(char a,char b){
	int aa = (int)a-'a';
	int bb = (int)b-'a';
	return min(abs(aa-bb),abs(26-abs(aa-bb)));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> pos;
	cin >> s;
	pos--; 
	if (pos <= (n-1)/2){
		awal = pos;
		akhir = n-1-pos;
		pos_maks = pos;
		while (awal <= akhir) {
			if (s[awal]!=s[akhir]) {
				ans += pindah(s[awal],s[akhir]);
				s[awal] = s[akhir];
				pos_maks = max(pos_maks,awal);
			}
			awal++; akhir--;
		}
		simpan = pos_maks;
		ans += pos_maks-pos;
		awal = pos; akhir = n-1-pos;
		//cout << ans << '\n';
		pos_maks = pos;
		bool ada = false;
		while (awal >=0 && akhir<s.size()){
			if (s[awal]!=s[akhir]) {
				ans += pindah(s[awal],s[akhir]);
				s[awal] = s[akhir];
				ada = true;
				pos_maks = min(pos_maks,awal);
			}
			awal--;
			akhir++;
		}
		ans += pos-pos_maks;
		if (ada) ans += simpan-pos;
	}
	else {
		awal = n-1-pos; akhir = pos;
		pos_maks = akhir;
		while (akhir < s.size() && awal >= 0){
			if (s[awal]!=s[akhir]) {
				ans += pindah(s[awal],s[akhir]);
				s[akhir] = s[awal];
				pos_maks = max(pos_maks,akhir);
			}
			akhir++;
			awal--;
		}
		simpan = pos_maks;
		ans += pos_maks-pos;
		awal = n-1-pos; akhir = pos;
		pos_maks = pos;
		bool ada = false;
		while (akhir >= awal) {
			if (s[awal]!=s[akhir]) {
				ans += pindah(s[awal],s[akhir]);
				s[akhir] = s[awal];
				ada = true;
				pos_maks = min(pos_maks,akhir);
			}
			akhir--; awal++;
		}
		ans += pos-pos_maks;
		if (ada) ans += simpan-pos;
	}
	cout << ans << '\n';
	return 0;
}