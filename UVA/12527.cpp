#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
int n,m,ans;
string temp;
int i,j;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	OPTIMASI
	while (cin >> n >> m){
		ans = 0;
		for (i = n ; i <= m ; i++) {
			temp = ubah(i);
			sort(temp.begin(),temp.end());
			j = 0; bool ada = false;
			for (j = 1; j < temp.size(); j++) {
				if (temp[j]==temp[j-1]) {ada = true; break;}
			}
			if (!ada) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}