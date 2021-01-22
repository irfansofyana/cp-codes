#include <bits/stdc++.h>
using namespace std;

long long n,i,j,k;
long long bil,temp;
vector<long long> ans;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=1;i<=(long long)sqrt(n);i++) {
		if (n%i==0) {
			bil = (n/i);									//pake i
			for (j=1;j<=(long long)sqrt(bil);j++) {
				if (bil%j==0) {
					k = (bil/j);
					ans.push_back((i+1)*(j+2)*(k+2)-n);
				}
			}
			temp = (n/i);
			for (j=1;j<=(long long)sqrt(i);j++) {
				if (i%j==0) {
					k = (i/j);
					ans.push_back((temp+1)*(j+2)*(k+2)-n);
				}
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout << ans[0] << " " << ans[ans.size()-1] << endl;
}
