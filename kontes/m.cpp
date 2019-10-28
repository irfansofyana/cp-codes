#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int lebar,tinggi;	
int ansl,anst,sum,maks;
vector<pair<int,int> > A;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n){
		A.clear();
		while (cin >> lebar >> tinggi && (lebar!=-1 || tinggi!=-1)) {
			A.push_back(make_pair(lebar,tinggi));
		}
		i = 0;
		ansl = 0; anst = 0;
		while (i<(int)A.size()){
			sum = 0;
			j = i;
			maks = 0;
			while ( j < (int)A.size() && sum<n) {
				sum += A[j].first; 
				if (sum>n) {
					sum -= A[j].first; break;
				}
				else {
					maks = max(maks,A[j].second);
					j++;
				}
			}
			ansl = max(ansl,sum);
			anst += maks;
			i = j;
		}
		cout << ansl << " x " << anst << '\n';
	}
	return 0;
}