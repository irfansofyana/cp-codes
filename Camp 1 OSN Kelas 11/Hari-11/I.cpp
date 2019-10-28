#include <bits/stdc++.h>
using namespace std;

int tc,a,h;
int i,j;
int c,d,e,f;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> h >> a;	
		for (i = 1 ; a>0 && h>0 ; i++) {
			if (i%2==1) {
				h+=3; a+=2;
			}
			else {
				c = h-5; d = a-10;
				e = h-20; f = a+5;
				if (c<=0 || d<=0) {
					if (e<=0 || f<=0) break;
					else {
						h = e; a = f;
					}
 				}
				else if (c>0 || d>0){
					if (e<=0 || f<=0) {
						h = c; a = d;
					}
					else {
						h = c; a = d;
					}
				}
			}
		}
		cout << i-1 << endl;
	}
	return 0;
}