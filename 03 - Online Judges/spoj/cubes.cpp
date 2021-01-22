#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct paket{
	ll nilai,a,b,c;
};

ll n,i,j,k;
ll pangkat3[105];
ll bil;
vector<paket> ans;

ll binser(ll a,ll b){
	ll res;
	while (a<=b){
		ll mid = (a+b)/2;
		if (pangkat3[mid] == bil) return mid;
		else if (pangkat3[mid] > bil) b = mid-1;
		else a = mid + 1;
	}
	return -1;
}

inline void generate(){
	for (i = 1 ; i <= 100; i++) pangkat3[i] = i*i*i;
	for (i = 1 ; i <= 100; i++) {
		for (j = i ; j <= 100 ; j++) {
			for (k = j; k <= 100 ; k++) {
				bil = i*i*i + j*j*j + k*k*k;
				if (binser(1,100) != -1){
					paket cc;
					if (i > 1 && j > 1 && k > 1){
						
					cc.nilai = binser(1,100);
					cc.a = i;
					cc.b = j;
					cc.c = k;
					ans.push_back(cc);
					}
				}
			}
		}
	}
}

bool comp(paket aa,paket bb){
	if (aa.nilai == bb.nilai) {
		if (aa.a == bb.a) {
			if (aa.b == bb.b) {
				return aa.c < bb.c;
			}
			return aa.b < bb.b;
		}
		return aa.a < bb.a;
	}
	return aa.nilai < bb.nilai;
}

int main(){
	generate();
	sort(ans.begin(),ans.end(),comp);
	for (i = 0; i < ans.size(); i++){
		printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n", ans[i].nilai,ans[i].a,ans[i].b,ans[i].c);
	}
	return 0;
}