#include <bits/stdc++.h>
using namespace std;

long long a,b,n,ans;
long long i,j,atas,bawah,lo,hi,mid;
vector<long long> gcd;

int main(){
	cin.tie(0);
	cin >> a >> b;
	if (a<b) {
		for (i = 1 ; i <= (long long)sqrt(a); i++) {
			if (a%i==0) {
				j = a/i;
				if (i!=j) {
					if (b%i==0) gcd.push_back(i);
					if (b%j==0) gcd.push_back(j);
				}
				else if (b%i==0) gcd.push_back(i);
			}
		}
	}
	else {
		for (i = 1 ; i <= (long long)sqrt(b); i++){
			if (b%i==0) {
				j = b/i;
				if (i!=j) {
					if (a%i==0) gcd.push_back(i);
					if (a%j==0) gcd.push_back(j);
				}
				else if (a%i==0) gcd.push_back(i);
			}
		}
	}
	sort(gcd.begin(),gcd.end());
	//for (i = 0 ; i < gcd.size(); i++) 
		//cout << gcd[i] << endl;
	cin >> n;
	while (n--) {
		cin >> bawah >> atas;
		lo = 0; hi = gcd.size()-1; ans = -1;
		while (lo<=hi) {
			mid = (lo+hi)/2;
			if (bawah<=gcd[mid] && gcd[mid]<=atas) {
				ans = gcd[mid];
				lo = mid+1;
			}
			else if (gcd[mid]<bawah) lo = mid+1; 
			else if (gcd[mid]>atas) hi = mid-1;
		}
		cout << ans << endl;
	}
	return 0;
}