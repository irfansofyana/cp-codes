#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y,tx,ty;
bool r,l,pertamar=true,pertamal=true;
string s;

int main(){
	cin >> n >> s;
	pertamar = pertamal = true;
	for (i=0;i<s.size();i++) {
		if (s[i]=='R' && pertamar) {
			x = tx = i;
			pertamar = false;
		} 
		else if (s[i]=='R') tx = i;
		else if (s[i]=='L' && pertamal) {
			y = i-1;
			pertamal = false;
		}
	}
	if (!pertamar && !pertamal) cout << x+1 << " " << y+1 << endl;
	else if (!pertamar)  cout << x+1 << " " << tx+2 << endl;
	else if (!pertamal) cout << y+2 << " " << y+1 << endl;
}
