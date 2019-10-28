#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char asal[300005],c;
int awal,x,smt;

int main(){
	cin >> n >> m;
	asal[0] = 'a';
	for (i = 1; i <= n ; i++)
		cin >> asal[i];
	i = 1 ;
	while (i <= n) {
		if (asal[i]!='.') i++;
		else {
			smt = 1; j = i+1;
			while (asal[j]=='.' && j<=n) {
				smt++; j++;
			}
			awal+=smt-1;
			i = j;
		}
	}
	while (m--) {
		cin >> x >> c;
		if (c!='.') {
			if (asal[x]!='.') {
				asal[x] = c;
				cout << awal << endl;
			}
			else if (asal[x]=='.') {
				asal[x] = c;
				if (asal[x-1]=='.' && asal[x+1]=='.') awal-=2;
				else if (asal[x-1]=='.' || asal[x+1]=='.') awal--;
				cout << awal << endl;
			}
		}
		else if (c=='.') {
			if (asal[x]=='.') {
				cout << awal << endl;
			}
			else {
				asal[x] = c;
				if (asal[x-1]=='.' && asal[x+1]=='.') awal+=2;
				else if (asal[x-1]=='.' || asal[x+1]=='.') awal++;
				cout << awal << endl;
			}
		}
		//for (i = 1 ; i <= n ; i++) cout << asal[i];
		//cout << endl;
	}
	return 0;
}