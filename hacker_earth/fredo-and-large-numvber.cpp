#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

typedef long long LL;

int N, Q;
int arr[MAXN+5], itr;
LL asli[MAXN+5];
int frek[MAXN+5];
map<LL,int> mep;
vector<pair<int,int> > q0;
int q1[MAXN+5];

int main(){
	// freopen("input.txt", "r", stdin);
	scanf("%d", &N);
	itr = 1;
	for (int i = 0; i < N; i++){
		LL x;
		scanf("%lld", &x);
		if (mep.find(x) == mep.end()) {
			mep[x] = itr;
			asli[itr] = x;
			itr++;
		}
		arr[i] = mep[x];
		frek[arr[i]]++;
	}
	memset(q1, -1, sizeof q1);
	for (int i = 0; i < N; i++){
		int bil = arr[i];
		int ada = frek[arr[i]];
		if (q1[ada] == -1){
			q1[ada] = bil;
			int lq = (int)q0.size()-1;
			if (lq == -1 || q0[lq].first < ada)
				q0.push_back({ada, bil});
		}
	}
	scanf("%d", &Q);
	while (Q--){
		int tipe;
		LL query;
		scanf("%d %lld", &tipe, &query);
		if (tipe == 1) {
			if (query > N)
				printf("0\n");
			else if (q1[query] == -1) 
				printf("0\n");
			else printf("%lld\n", asli[q1[query]]);
		}else {
			if (query > N) {
				printf("0\n");
			}else {
				int lo = 0;
				int hi = (int)q0.size()-1;
				int ret = 1e9;
				while (lo <= hi){
					int mid = (lo + hi)/2;
					if (q0[mid].first < query) lo = mid+1;
					else if (q0[mid].first >= query){
						ret = min(ret, mid);
						hi = mid - 1;
					}
				}
				if (ret == 1e9) printf("0\n");
				else {
					printf("%lld\n", asli[q0[ret].second]);
					//break;
				}
			}
		}
	}
	return 0;
}