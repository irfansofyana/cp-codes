#include <bits/stdc++.h>
using namespace std;

string a,b,temp;
vector<string> kumpul,ans;
int n,i,j;
map<string,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> b){
		kumpul.push_back(a); kumpul.push_back(b);
	}
	for (i = 0 ; i < (int)kumpul.size(); i++){
		for (j = 0 ; j < (int)kumpul.size(); j++){
			if (i!=j) {
				temp = "";
				temp = temp+kumpul[i];
				temp = temp+kumpul[j];
				mep[temp]++;
				if (mep[temp]==1) ans.push_back(temp);
			}
		}
	}
	sort(ans.begin(),ans.end());
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
	return 0;
}