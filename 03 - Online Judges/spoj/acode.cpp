#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll A[5005];
string s,baru;
ll n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s && s!="0") {
		i = 0;
		baru = "";
		while (i < (int)s.size()) {
			if (i < (int)s.size()-1 && s[i+1]=='0') {
				baru = baru+'a';
				i += 2;
			}
			else {
				baru = baru+s[i];
				i++;
			}
		}
		memset(A,0,sizeof A);
		A[0] = 1; j = 1;
		for (i = (int)baru.size()-1 ; i >= 0; i--) {
			if (baru[i]=='a') A[j] = A[j-1];
			else {
				if (i==(int)baru.size()-1) A[j] = A[j-1];
				else {
					int p = (int)baru[i]-'0';
					int q = (int)baru[i+1]-'0';
					if (10*p+q>=1 && 10*p+q<=26) {
						A[j] = A[j-1]+A[j-2];
					}
					else A[j] = A[j-1];
				}
			}
			j++;
		}
		cout << A[j-1] << '\n';
	}
	return 0;
}