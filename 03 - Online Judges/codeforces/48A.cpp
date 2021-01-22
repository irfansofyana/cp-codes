#include <bits/stdc++.h>
using namespace std;

string a,b,c;
string kertas="paper",batu="rock",gunting="scissors";

int main(){
	cin.tie(0);
	cin >> a >> b >> c;
	if (a==b || a==c || b==c){
		if (a==b && c==b) puts("?");
		else if (a==b) {
			if (c==kertas && a==batu) puts("S");
			else if (c==batu && a==gunting) puts("S");
			else if (c==gunting && a==kertas) puts("S");
			else puts("?");
		}
		else if (b==c) {
			if (a==kertas && c==batu) puts("F");
			else if (a==batu && c==gunting) puts("F");
			else if (a==gunting && c==kertas) puts("F");
			else puts("?");
		}
		else if (a==c) {
			if (b==kertas && a==batu) puts("M");
			else if (b==batu && a==gunting) puts("M");
			else if (b==gunting && a==kertas) puts("M");
			else puts("?");
		}
	}
	else puts("?");
}
