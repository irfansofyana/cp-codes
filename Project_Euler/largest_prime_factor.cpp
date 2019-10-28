#include <bits/stdc++.h>
using namespace std;

vector<int> prima;
long long n,i,j,ans;
long long acuan;
bool bil[40000000];

int main() {
	acuan = static_cast<long long>(sqrt(600851475143));
	memset(bil,false,sizeof bil);
	for (i=2;i<=775146;i++) {
		if (!bil[i]) {
			j = i;
			while (j*i<=775146) {
				bil[j*i] = true;
				j++;
			}
			prima.push_back(i);
		}
	}
	for (i=0;i<prima.size();i++) {
		if (600851475143%prima[i]==0) {
			ans = prima[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
