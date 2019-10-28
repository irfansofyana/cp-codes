#include <bits/stdc++.h>
#define INF 2e9
#define EPS 1e-9
#define mp make_pair
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef vector<int> vi;
typedef vector<vi> vvi;

int TC,k,a,b,i,ans,j;
vi ha,hb;

void cari_satu(int bil){
	int x;
	if (bil==1) {
		ha.pb(1);
		//return;
	}
	else {
		ha.pb(bil);
		x = bil%k;
		if (bil<=k+1) 
			return cari_satu(1);
		else if (x==0 || x==1) 
			return cari_satu(bil/k);
		else return cari_satu((bil/k)+1);
	}
}

void cari_dua(int bil){
	int x;
	if (bil==1) {
		hb.pb(1);
		//return;
	}
	else {
		hb.pb(bil);
		x = bil%k;
		if (bil<=k+1) 
			return cari_dua(1);
		else if (x==0 || x==1) 
			return cari_dua(bil/k);
		else return cari_dua((bil/k)+1);
	}
}
int main(){
	scanf("%d", &TC);
	while (TC--) {
		ha.clear(); hb.clear();
		scanf("%d %d %d", &k, &a, &b);
		cari_satu(a); cari_dua(b);
		//for (i=0;i<ha.size();i++)
		//	cout << ha[i] << " ";
		//cout << "\n";
		//for (i=0;i<hb.size();i++) 
		//	cout << hb[i] << " ";
		//cout << "\n";
		ans = -1000000000;
		for (i=0;i<ha.size();i++) {
			for (j=0;j<hb.size();j++) {
				if (ha[i]==hb[j]) {
					if (ha[i]>ans)
						ans = ha[i];
					break;
				}
			}
		}
		cout << ans << endl;
	}
}
