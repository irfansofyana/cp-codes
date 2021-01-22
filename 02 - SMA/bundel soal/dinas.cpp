#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nilai;
	string jalan;
};

int n,i,j,idx;
int A[15][15];
bool visited[15][15];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
string temp,smt;
paket ans[1000005];

string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}

void jelajah(int udah,int poin,string langkah,pair<int,int> titik) {
	visited[titik.first][titik.second] = true;
	if (udah==5) {  
		ans[idx].nilai = poin;
		ans[idx].jalan = langkah;
		idx++;
	}
	else 	{
		for (int z=0;z<4;z++) {
			int ti = titik.first+dx[z];
			int tii = titik.second+dy[z];
			if (ti>=0 && ti<n && tii>=0 && tii<n && visited[ti][tii]==false) {
				jelajah(udah+1,poin+A[ti][tii]*(udah+1),langkah+ubah(ti)+ubah(tii),make_pair(ti,tii));
				visited[ti][tii] = false;
			}
		}
	}
} 

bool comp(paket a,paket b) {
	if (a.nilai==b.nilai) return a.jalan<b.jalan;
	return a.nilai>b.nilai;
}
int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			cin >> A[i][j];
	idx = 0;
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			memset(visited,false,sizeof visited);
			jelajah(1,A[i][j],ubah(i)+ubah(j),make_pair(i,j));
		}
	}
	sort(ans,ans+idx,comp);
	for (i=0;i<2;i++) {
		if (i==0) puts("Plan A");
		else puts("Plan B");
		cout << ans[i].nilai << endl;
		j = 0;
		while (j<9) {
			cout << ans[i].jalan[j]-'0'+1 <<" "<<ans[i].jalan[j+1]-'0'+1<<endl;
			j+=2;
		}
	} 
	return 0;
} 
