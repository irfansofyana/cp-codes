#include <bits/stdc++.h>
using namespace std;

int n,i,j,naik;
int tc,mulai,it,z;
char A[100][100];
string s;

int main(){
	cin.tie(0);
	cin >> tc;
	for (z = 0 ; z < tc ; z++) {
		cin >> s;
		mulai = 1; it = 1;
		for (i = 1 ; i < s.size() ; i++) {
			if (s[i]=='C') {
				if (s[i-1]=='R') it++;
			}
			else if (s[i]=='R') {
				if (s[i]=='R') it++;
			}
			else if (s[i]=='F') {
				if (s[i-1]=='F') {
					it--;
					if (it<=0) mulai++;
				}
				else if (s[i-1]=='C') {
					it--;
					if (it<=0) mulai++;
 				}
			}
		}
		
	}
	return 0;
}