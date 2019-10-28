#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int n,i,j;
int k,t,temp;
int A[20];
map<vi,int> mep;
vector<vi> res;
vi a;

bool comp(int a,int b){
	return a>b;
}

bool Komp(vi a, vi b){
	for (int z = 0 ; z < min ((int)a.size(),(int)b.size()); z++) {
		if (a[z]>b[z]) return true;
		else if (a[z]<b[z]) return false;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> t >> n) {
		if (n==0) break;
		mep.clear();
		res.clear();
		for (i = 0 ; i < n ; i++) cin >> A[i];
		cout << "Sums of " << t << ":\n";
		for (i = 1 ; i < (1<<n); i++) {
			int temp = 0; 
			a.clear();
			for (j = 0 ; j < n ; j++) {
				if ((i&(1<<j))!=0) {
					temp += A[j];
					a.push_back(A[j]);
				}
			}
			sort(a.begin(),a.end(),comp);
			mep[a]++;
			if (temp==t && mep[a]==1)	 {
				res.push_back(a);
			}
		}
		sort(res.begin(),res.end(),Komp);
		if (res.size()==0) cout << "NONE\n";
		else {
			for (i = 0 ; i < res.size(); i++){
				for (j = 0 ; j < res[i].size(); j++){
					cout << res[i][j];
					cout << (j==(int)res[i].size()-1 ? '\n':'+') ;
				} 
			}
		}
	}
	return 0;
}