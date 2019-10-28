#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

bool prima[40005];
long long n,i,j,hasil;
long long a,b,k,pangkat;
int t;
vector<long long> prima;

void sieve(){
	memset(prima,true,sizeof prima);
	prima[1] = false;	
	for (i=2;i<=40000;i++) {
		if (prima[i]) {
			prima.push_back(i);
			j = i;
			while (i*j<=40000) {
				prima[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a==0 && b==0) cout << 1 << endl;
		else if (a==0) cout << 0 << endl;
		else {
			k = a;
			for (i=0;i<prima.size() && k>1;i++) {
				if (k%prima[i]==0) {
					pangkat = 0;
					while (k%prima[i]==0) {
						k/=prima[i];
						pangkat++;
					}
					
				}
			}
		}
	}	
}
