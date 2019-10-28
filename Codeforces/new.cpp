#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define INF 2e9
#define EPS 1e-9

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
struct paket{
	int pos,nilai;
};

int n,x,val;
int i,j,ans;
int posi,neg;
paket kiri[5005],kanan[5005];

bool comp(paket a,paket b){
	return a.pos>b.pos;
}
bool komp(paket a,paket b){
	return a.pos<b.pos;
}
int main(){
	int idx1,idx2;
	idx1 = idx2 = 0;
	scanf("%d", &n); 
	for (i=0;i<n;i++) {
		scanf("%d %d", &x, &val);
		if (x<0) {
			neg++;
			kiri[idx1].nilai = val;
			kiri[idx1].pos = x;
			idx1++;
		}
		else {
			posi++;
			kanan[idx2].nilai = val;
			kanan[idx2].pos = x;
			idx2++;
		}
	}
	sort(kiri,kiri+idx1,comp); sort(kanan,kanan+idx2,komp);
	if (posi>neg) {
		for (i=0;i<idx1;i++) ans+=kiri[i].nilai;
		for (i=0;i<neg+1;i++) ans+=kanan[i].nilai;
	}
	else {
		for (i=0;i<idx2;i++) ans+=kanan[i].nilai;
		for (i=0;i<posi+1;i++) ans+=kiri[i].nilai;
	}
	printf("%d\n", ans);
	return 0;
}
