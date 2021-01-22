#include <bits/stdc++.h>
using namespace std;

map<string,int> mep;
int n,i,j;
string ans1,ans2,asli[10010],fake[10010];
char temp[110];
vector<string> jawaban;
int maks=-1000000000;
int main(){
	cin >> n;
	for (i=0;i<n;i++){
		cin >> asli[i];
		for (j=0;j<asli[i].size();j++){
			temp[j]=asli[i][j];
		}
		sort(temp,temp+asli[i].size());
		fake[i] = "";
		for (j=0;j<asli[i].size();j++){
			fake[i] = fake[i]+temp[j];
 		}
	//	cout << asli[i] <<" "<< fake[i] << endl;
		mep[fake[i]]++;
	}
	for (i=0;i<n;i++){
		if (mep[fake[i]]>maks) {
			ans1 = fake[i];
			ans2 = asli[i];
			maks = mep[fake[i]];
		}
		else if (mep[fake[i]]==maks) {
			if (asli[i]<ans2) {
				ans1 = fake[i];
				ans2 = asli[i];
			}
		}
	//	cout<<mep[fake[i]]<<" "<<fake[i]<<endl;
	}
	if (maks!=1){
	cout << maks << endl;
	for (i=0;i<n;i++){
		if (fake[i]==ans1) jawaban.push_back(asli[i]);
	}
	sort(jawaban.begin(),jawaban.end());
	for (i=0;i<jawaban.size();i++) cout<<jawaban[i]<<endl; }
	else puts("TIDAK ADA");
	return 0;
}