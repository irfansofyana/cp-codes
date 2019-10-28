#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,n,i,j,t,ans,x;
char c;
vector<int> merah,putih;

bool comp(int a,int b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> tc;
	while (tc--) {
		cin >> n; merah.clear(); putih.clear(); ans = 0;
		for (i = 0 ; i < n ; i++){
			cin >> x >> c;
			if (c=='R') merah.push_back(x);
			else putih.push_back(x);
		}
		sort(merah.begin(),merah.end(),comp); sort(putih.begin(),putih.end(),comp);
		if (merah.size()!=0 && putih.size()!=0) {
			for (i = 0 ; i < min((int)putih.size(),(int)merah.size()) ; i++) {
				ans += merah[i]-1+putih[i]-1;
			}
		} 
		cout << "Case #" << ++t << ": " <<  ans << '\n';
	}
	return 0;
}