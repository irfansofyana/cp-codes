#include <bits/stdc++.h>

using namespace std;

int n,i,j,m,banyak;
int A[110][110],ada;
pair<int,int> ans;
vector<int> bil;
vector<int> vi;
void cek(pair<int,int> x,pair<int,int> y){
	int it,itt;
	int c[10];
	memset(c,0,sizeof(c));
	vi.clear();
	ada = 0;
	for (it = x.first;it<=y.first;it++){
		for (itt = x.second;itt<=y.second;itt++){
			c[A[it][itt]]++;
			vi.push_back(A[it][itt]);
		}
	}
	sort(vi.begin(),vi.end());
	for (it=0;it<=9;it++){
		if (c[it]!=0) ada++; 
	}
}
void jelajah(){
	int a,b,c,d;
	pair<int,int> pa,pb;
	a = b = 0;
	c = d = m-1;
	for (i=0;i<n-m+1;i++){
		for (j=0;j<n-m+1;j++){
			pa = make_pair(a,b);
			pb = make_pair(c,d);
			cek(pa,pb);
			if (i==0 && j==0){
				banyak = ada;
				ans = pa;
				bil = vi;
			}
			else if (ada<banyak) {
				banyak = ada;
				ans = pa;
				bil = vi;
			}
			else if (ada==banyak) {
				banyak = ada;
				bool ganti = false;
				for (int z=0;z<m;z++){
					if (vi[z]==bil[z]) continue;
					else if (vi[z]>bil[z]) {
						ganti = true;
						break;
					} 
					else if (vi[z]<bil[z]) break;
				}
				if (ganti){ bil = vi; ans=pa;}
			}
			b++;
			d++;
		}
		a++;c++;b = 0;d = m-1;
	}
}
int main(){
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
	jelajah();
	printf("%d %d\n",ans.first+1,ans.second+1);
}