#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;
vector<string> ans;

int binser(int awal,int akhir){
	int mid = (awal+akhir)/2;
	if (ans[mid]==s) return mid+1;
	if (ans[mid] < s) return binser(mid+1,akhir);
	if (ans[mid] > s) return binser(awal,mid-1);
}

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		ans.push_back(s);
		sort(ans.begin(),ans.end());
		cout << binser(0,(int)ans.size()-1) << '\n';
	}
	return 0;
}