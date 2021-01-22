#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int t,n,i,j,k,l,ans,target;
vector<int> prime;

bool cek(int k){
	int z;
	for (z = 2; z<=(int)sqrt(k);z++){
		if (k%z==0) return false;
	}
	return true;
}

void gen(){
	for (i = 2 ; i <= 100 ; i++) {
		if (cek(i)) prime.push_back(i);
	}
}

int main(){
	OPTIMASI
	gen();
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> target;
		ans = 0;
		for (i = 0 ; i < prime.size(); i++){
			for (j = i+1 ; j < prime.size(); j++ ) {
				for (k = j+1; k < prime.size(); k++) {
					for (l = k+1; l < prime.size(); l++) {
						if (prime[i]+prime[j]+prime[k]+prime[l]==target) ans++;
					}
				}
			}
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
}