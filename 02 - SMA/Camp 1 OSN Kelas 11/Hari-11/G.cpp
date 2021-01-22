#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tc,a,b,c,d;
char ch;
bool pertama;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		pertama = true;
		for (i = 0 ; i < 8 ; i++) {
			for (j = 0 ; j < 8 ; j++) {
				cin >> ch;
				if (ch=='B' && pertama) {
					a = i; b = j;
					pertama = false;
				}
				else if (ch=='B') {
					c = i; d = j;
				}
			}
		}
		//cout << a << " " << b << " " << c << " " << d << endl;
		if (abs(a-c)==abs(b-d)) puts("Yes");
		else puts("No");
	}
	return 0;
}