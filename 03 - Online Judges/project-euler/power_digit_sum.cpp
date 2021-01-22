#include <bits/stdc++.h>
using namespace std;

string dp[1005];
int n,i,j,ans;

string kali_2(string s){
	string result="";
	int sisa=0;
	for (int z=s.size()-1;z>=0;z--) {
		result = char((2*(int(s[z])-'0')+sisa)%10+'0') + result;
		sisa = (2*(int(s[z])-'0')+sisa)/10;
	}
	while (sisa>0) {
		result = char(sisa%10+48)+result;
		sisa/=10;
	}
	return result;
}

int main(){
	dp[0]="1";
	for (i=1;i<=1000;i++) {
		dp[i] = kali_2(dp[i-1]);
	}
	for (i=0;i<dp[1000].size();i++) 
		ans+=int(dp[1000][i])-'0';
	cout << ans << endl;
}


