#include <bits/stdc++.h>
using namespace std;

string s[100],ans;
int n,i,j;
int t,tc;

string jumlah(string a,string b) {
	string result="",temp="";
	int sisa=0;
	for (int z=0;z<a.size()-b.size();z++) {
		temp = temp+'0';
	}
	b = temp+b;
	for (int z=a.size()-1;z>=0;z--) {
		result = char(((int(a[z])-'0'+int(b[z])-'0')+sisa)%10+48)+result;;
		sisa = (int(a[z])-'0'+int(b[z])-'0'+sisa)/10;
	}
	while (sisa>0) {
		result = char(sisa%10+48)+result;
		sisa/=10;
	}
	return result;
}

void isi(){
	s[0] = s[1] = "1";
	for (i=2;i<=92;i++)
		s[i] = jumlah(s[i-1],s[i-2]);
}
int main(){
	cin.tie(0);
	isi();
	cin >> t;
	tc = 1;
	//for (i=1;i<=10;i++)
	//	cout<<s[i]<<endl;
	cout << s[92].size() << endl;
	while (t--) {
		cin >> n;
		ans = "";
		for (int k=0;k<n;k++) {
			int temp;
			cin >> temp;
			if (ans.size()>s[temp].size()) ans = jumlah(ans,s[temp]);
			else ans = jumlah(s[temp],ans);
		}
		cout << "Case #"<<tc<<": "<<ans<<endl;
		tc++; 
	} 
	return 0; 
}
