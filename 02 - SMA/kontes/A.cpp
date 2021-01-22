#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,menit,penalti;
string s;
char soal;
map<char,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	int ac = 0;
	while (cin >> menit && menit!=-1){
		cin >> soal >> s;
		if (s=="right") {
			ac++;
			penalti += menit+mep[soal];
		}
		else {
			mep[soal] += 20;
		}
	}
	cout << ac << " " << penalti << '\n';
	return 0;
}