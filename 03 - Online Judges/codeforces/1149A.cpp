#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define LL long long 
using namespace std;

const int MAXN = 4e5;

int N, satu, dua, num;
vector<int> primes;
bitset<MAXN+5> bil;
vector<int> ans;

void sieve(){
	bil.set();
	bil[0] = false;
	bil[1] = false;
	for (LL i = 2; i <= MAXN; i++){
		if (bil[i]){
			primes.pb(i);
			for (LL j = i*i; j <= MAXN; j += i)
				bil[j] = false;
		}
	}
}

int main(){
	sieve();
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &num);
		if (num == 1) satu++;
		else dua++;
	}
	int idx = 0;
	int last = 0;
	while (satu > 0 || dua > 0){
		// cout << primes[idx] << " " << last << '\n';
		int diff = primes[idx]-last;
		if (diff >= 2) {
			if (diff == 2 && dua > 0){
				dua--;
				ans.pb(2);
				last+=2;
				idx++;
			}else if (dua > 0){
				dua--;
				ans.pb(2);
				last+=2;
			}else if (satu > 0){
				satu--;
				ans.pb(1);
				last+=1;
			}
		}else{
			if (satu > 0){
				satu--;
				ans.pb(1);
				last+=1;
				idx++;
			}else {
				dua--;
				ans.pb(2);
				last += 2;
				idx++;
			}
		}
	}
	for (int i = 0; i < ans.size(); i++){
		cout << ans[i];
		cout << (i == (int)ans.size()-1 ? '\n' : ' ');
	}
	return 0;
}