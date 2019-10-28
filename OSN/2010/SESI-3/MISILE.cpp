#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nomor,bisa;
	vector<int> can;
};

int n,m,i,j;
pair<int,int> misil[1005];
int rumah[1005];
bool used[1005];
paket A[1005];
int temp,ans;

bool comp(paket a,paket b){
	return a.bisa<b.bisa;
}

int main(){
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++) 
		scanf("%d",&rumah[i]);
	for (i=0;i<m;i++) {
		int x,y;
		scanf("%d %d",&x,&y);
		misil[i] = make_pair(x,y);
	}
	for (i=0;i<n;i++) {
		temp = 0;
		for (j=0;j<m;j++) {
			if (rumah[i]>=misil[j].first && rumah[i]<=misil[j].second) {
				A[i].can.push_back(j);
				temp++;
			}
		}
		A[i].nomor = rumah[i];
		A[i].bisa = temp;
	}
	sort(A,A+n,comp);
	memset(used,false,sizeof used);
	i = 0;
	while (i<n) {
		if (A[i].bisa==0) i++;
		else {
			j = 0;
			while (j<A[i].can.size()) {
				if (used[A[i].can[j]]) j++;
				else {
					used[A[i].can[j]] = true;
					ans++;
					break;
				}
			}
			i++;
		}
	}
	cout << ans << endl;
}
