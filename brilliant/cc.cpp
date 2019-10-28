#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,e,f;
int x;

int main(){
	for (a = 0 ; a <= 9; a++){
		for (b = a ; b >= 0; b--) {
			for (c = b ; c >=0 ; c--) {
				for (d = c ; d >= 0 ; d--) {
					for (e = d; e >=0 ; e--){
						for (f = e ; f >= 0 ; f--) {
							x++;
							if (x==2005) {
								cout << a << b << c << d << e << f << '\n';
							}
						}
					}
				}
			}
		}
	}
}