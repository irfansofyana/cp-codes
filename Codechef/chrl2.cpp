#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
vector<int> temp;
int idx;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (i= 0 ;  i < s.size(); i++) {
		if (s[i]=='C') {
			temp.push_back(0);
		}
		else if (s[i]=='H' || s[i]=='E' || s[i]=='F') {
			int skrng = 0;
			if (s[i]=='H') skrng = 1;
			else if (s[i]=='E') skrng = 2;
			else if (s[i]=='F') skrng = 3;
			for (j = idx ; j < temp.size(); j++) {
				if (temp[j]==skrng-1) {
					temp[j] = skrng;
					if (skrng==3) {
						idx++; break;
					}
				}
			}
		}
	}
	cout << idx << '\n';
	return 0;
}