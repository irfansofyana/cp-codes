#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j,k,l;
pair<int,int> A[35],B[5];
bool tanda[35];
int a,b,c;

bool comp(pair<int,int> x,pair<int,int> y){
	if (x.first==y.first) return x.second<y.second;
	return x.first < y.first;
}

int sqr(int x){
	return x*x;
}

int jarak(pair<int,int> x,pair<int,int> y){
	return sqr(x.first-y.first)+sqr(x.second-y.second);
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		memset(tanda,false,sizeof tanda);
		for (i = 0 ; i < n ; i++) {
			int x,y;
			cin >> x >> y;
			A[i] = make_pair(x,y);
		}
		for (i = 0 ; i < n-3 ; i++) {
			for (j = i+1 ; j < n-2 ; j++) {
				for (k = j+1 ; k < n-1 ; k++) {
					for (l = k+1 ; l < n ; l++) {
						B[0] = A[i];
						B[1] = A[j];
						B[2] = A[k];
						B[3] = A[l];
						sort(B,B+4,comp);
						if (B[0].first==B[1].first && B[2].first==B[3].first && B[0].second==B[2].second && B[1].second==B[3].second) {
							a = jarak(B[0],B[1]); b = jarak(B[0],B[2]); c = jarak(B[0],B[3]);
							if (c==a+b && a==b) {
								tanda[i] = true;
								tanda[j] = true;
								tanda[k] = true;
								tanda[l] = true;
							}
						}
					}
				}
			}
		}
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (tanda[i]) ans++;
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}