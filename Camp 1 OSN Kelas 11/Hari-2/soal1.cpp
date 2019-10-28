#include <bits/stdc++.h>
using namespace std;
string s,st,awal;
int n,i,j,ukuran;
char ch[1000],cl[1000];

int main(){
	while (cin >> s && s!="#") {
		for (i = 0 ; i < s.size() ; i++) {
			ch[i] = s[i];
			cl[i] = s[i];
		}
		ukuran = s.size();
		next_permutation(ch,ch+ukuran);
		st = "";
		for (i = 0 ; i<ukuran ; i++) {
			st = st+ch[i];
		}
		sort(cl,cl+ukuran);
		awal = "";
		for (i = 0 ; i < ukuran ; i++) {
			awal = awal+cl[i];
		}
		if (awal==st) puts("No Successor");
		else {
			cout << st << endl;
		}
	}
	return 0;
}