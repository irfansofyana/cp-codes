#include <bits/stdc++.h>

using namespace std;
int tc,n,m,k,i,j;
vector<pair<int,int> > vi;
pair<int,int> tes;
bool sudah[10000000];

int main(){
	scanf("%d",&tc);
	memset(sudah,false,sizeof sudah);
	vi.push_back(make_pair(1,2));
	vi.push_back(make_pair(2,1));
	k = 2;
	sudah[1] = true;
	sudah[2] = true;
	for (i=3;i<=1000000;i++) {
		if (!sudah[i]) {
			vi.push_back(make_pair(i,i+k));
			sudah[i] = true;
			sudah[i+k] = true;
			k++;
		}
	}
//	cout<< vi.size() << endl;
	while (tc--){
		scanf("%d %d",&n,&m);
		if (n==m) puts("pertama");
		else {
			bool kedua = false;
			for (i=0;i<vi.size();i++) {
				if (n==vi[i].first && m==vi[i].second || (n==vi[i].second && m==vi[i].first)) {
					puts("kedua");
					kedua = true;
					break;
				}
			}
			if (!kedua) puts("pertama");
		}  
	}
	return 0;
}
