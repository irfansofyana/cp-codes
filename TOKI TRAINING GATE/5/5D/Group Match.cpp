#include <bits/stdc++.h>
#define ll long long
#define EPS 1e-12
#define INF 2000000000
using namespace std;

typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vpii;
typedef vector <vpii> vvpii;
typedef vector <vi> vvi;

struct game{
	int menang,kalah,seri;
};

int n,i,j,t;
int m[1000],s[1000],k[1000];
vvpii kemungkinan;
game x[10];
int poin[10];
bool tanda;

void jelajah(int idx){
	bool smt;
	if (idx!=n) {
		for (int z=0;z<kemungkinan[idx].size();z++) {
			x[idx].menang = kemungkinan[idx][z].first;
			x[idx].seri = kemungkinan[idx][z].second;
			x[idx].kalah = n-1-x[idx].menang-x[idx].seri;
			jelajah(idx+1);
		}
	}
	else { 
	//  for (int zz=0;zz<n;zz++) {
    //      cout << x[zz].menang << " " << x[zz].seri << " " << x[zz].kalah << endl;
    //  }
    //  cout << endl;
        for (int zz=0;zz<n;zz++) {
            m[zz] = x[zz].menang; s[zz] = x[zz].seri; k[zz] = x[zz].kalah;
        }
        for (int zz=0;zz<n;zz++) {
            for (int zzz=zz+1;zzz<n;zzz++) {
                if (m[zz]>0 && k[zzz]>0) {
                    m[zz]--; k[zzz]--;
                }
                else if (k[zz]>0 && m[zzz]>0) {
                    k[zz]--; m[zzz]--;
                }
                else if (s[zz]>0 && s[zzz]>0) {
                    s[zz]--; s[zzz]--;
                }
            }
             
        }
        smt = true;
        for (int zz=0;zz<n;zz++) {
            if (!(m[zz]==0 && k[zz]==0 && s[zz]==0)) {
                smt = false;
                break;
            }
        }
        if (smt) tanda = true;
	}
}

void cari_kemungkinan(int idx) {
	int temp;
	for (int z=0;z<=(poin[idx])/3;z++) {
		temp = poin[idx]-3*z;
		if (temp+z<=n-1) {
			kemungkinan[idx].push_back(make_pair(z,temp));
		}
	}
}

bool comp(int a,int b){
	return a>b;
}

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i=0;i<n;i++)
			scanf("%d", &poin[i]);
		sort(poin,poin+n,comp);
		kemungkinan.assign(n+1,vpii ());
		for (i=0;i<n;i++) 
			cari_kemungkinan(i);
		/*for (i=0;i<n;i++) {
			for (j=0;j<kemungkinan[i].size();j++) {
				cout << kemungkinan[i][j].first << " " << kemungkinan[i][j].second << endl;
			}
			cout << endl;
		}*/
		tanda = false;
		jelajah(0);
		puts(tanda?"YES":"NO");
	}
	return 0;
}
