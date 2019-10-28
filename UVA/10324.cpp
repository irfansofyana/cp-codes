#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

string s;
int n,i,j,tc;
vector<pair<int,int> > arr;
int lo,hi;

int binser(int l,int r,int bil){
	while (l <= r) {
		int mid = (l+r)/2;
		if (arr[mid].first <= bil && bil <= arr[mid].second) return mid;
		else if (arr[mid].second < bil) l = mid+1;
		else if (arr[mid].first > bil) r = mid-1;
	}
	return -1;
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	while (cin >> s){
		arr.clear();
		i = 0;
		while (i < s.size()){
			j = i+1;
			while (j < s.size() && s[j] == s[j-1]) j++;
			arr.push_back({i,j-1});
			i = j;
		}
		cout << "Case " << ++tc << ":\n";
		cin >> n;
		while (n--) {
			cin >> i >> j;
			lo = min(i,j); hi = max(i,j);
			if (binser(0,(int)arr.size()-1,lo)!=binser(0,(int)arr.size()-1,hi)) cout << "No\n";
			else cout << "Yes\n";
		}
	}
	return 0;
}