#include <bits/stdc++.h>
using namespace std;

int n,t,c,i,j;
int A[200005];
int dp[200005];
int ans;
vector<int> dilarang;

bool binary_search(int a,int b,int c,int d){
	int tengah=(a+b)/2;
	if (a>b) return true;
	else if (dilarang[tengah]>=c && dilarang[tengah]<=d) return false;
	else if (dilarang[tengah]>d) return binary_search(a,tengah-1,c,d);
	else if (dilarang[tengah]<d) return binary_search(tengah+1,b,c,d);
	
}
int main(){
	cin.tie(0);
	cin >> n >> t >> c;
	for (i=1;i<=n;i++){
		cin >> A[i];
		if (A[i]>t) dilarang.push_back(i);
	}
	i = c;
	while (i<=n) {
		if (binary_search(0,dilarang.size()-1,i-c+1,i)) ans++;
		i++;
	} 
	cout << ans << endl;
}
