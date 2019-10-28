#include <bits/stdc++.h>
using namespace std;

vector<int> A,B;
int n,m,i,j,x;
int bawah,atas;
int bil;
int tc;

int _lower(int awal,int akhir) {
	int mid = (awal+akhir)/2;
	if (awal > akhir) return bawah;
	else if (B[mid] <= bil) {
		bawah = mid;
		return _lower(mid+1,akhir);
	}
	else if (B[mid] > bil) {
		return _lower(awal,mid-1);
	}
}

int _upper(int awal,int akhir) {
	int mid = (awal+akhir)/2;
	if (awal > akhir) return atas;
	else if (B[mid] >= bil) {
		atas = mid;
		return _upper(awal,mid-1);
	}
	else if (B[mid] < bil) {
		return _upper(mid+1,akhir);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m){
		if (n==0 && m==0) return 0;
		A.clear(); B.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			A.push_back(x);
		}
		for (i = 0; i < m ; i++) {
			cin >> x;
			B.push_back(x);
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		cout << "Case " << ++tc << ": ";
		int belum = (int)A.size();
		for (i = (int)A.size()-1; i >= 0 && B.size() > 0 ; i--){
			int _at , _bw;
			bil = A[i];
			bawah = -1; atas = 1000000000;
			_bw = _lower(0,(int)B.size()-1);
			_at = _upper(0,(int)B.size()-1);
			//cout << _bw << " " << _at << '\n';
			if (_bw==-1) B.erase(B.begin() + _at);
			else if (_at == 1000000000) B.erase(B.begin() + (int)B.size()-1);
			else {
				if (abs(bil-B[_bw]) < abs(bil-B[_at])) {B.erase(B.begin() + _bw);}
				else B.erase(B.begin() + _at);
			}
			belum--;
		}
		if (belum!=0) {
			cout << belum << " ";
			int mini;
			for (i = 0 ; i < belum; i++) {
				if (i==0) mini = A[i];
				else mini = min(mini, A[i]);
			}
			cout << mini << '\n';
		}
		else cout << 0 << '\n';
	}
	return 0;
}