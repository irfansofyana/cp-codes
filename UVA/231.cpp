#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector<int> vi;
int x,ans;
int tc;
vector<int> jaw;

int binser(int l,int r){
	int mid = (l+r)/2;
	if (l>r) return ans;
	else if (vi[mid]<x) {
		ans = mid;
		return binser(l,mid-1);
	}
	else if (vi[mid]>=x) {
		return binser(mid+1,r);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool pertama = true;
	while (1) {
		cin >> x;
		if (x==-1) break;
		vi.push_back(x);
		int len = 1;
		while (cin >> x,x!=-1) {
			if (x>vi[0]) vi[0] = x;
			else if (x<=vi[len-1]) {
				vi.push_back(x);
				len++;
			}
			else {
				ans = -1;
				vi[binser(0,len-1)] = x;
			}
		}
		jaw.push_back(len);
		vi.clear();
	}
	for (i = 0 ; i < jaw.size(); i++){
		cout << "Test #" << i+1 << ":\n";
		cout << "  maximum possible interceptions: " << jaw[i] << '\n';
		if (i!=(int)jaw.size()-1) cout << '\n';
	}
	return 0;
}