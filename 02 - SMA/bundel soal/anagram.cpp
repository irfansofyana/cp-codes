#include <bits/stdc++.h>
using namespace std;

string asli,palsu[5005];
int n,i,j,ans,t,tc;
map<string,int> mep;
char s[20];

string ubah(string k){
	for (j=0;j<k.size();j++) 
		s[j] = k[j];
	sort(s,s+k.size());
	string result="";
	for (j=0;j<k.size();j++) 
		result = result+s[j];
	return result;
}

int main(){
	cin.tie(0);
	cin>>t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i=0;i<n;i++) {
			cin >> asli;
			palsu[i] = ubah(asli);
			mep[palsu[i]]++;
		}
		for (i=0;i<n;i++) {
			if (mep[palsu[i]]!=0) {
				ans+=(mep[palsu[i]]*(mep[palsu[i]]-1)/2);
				mep[palsu[i]] = 0;
			}	
		}
		cout<<"Kasus #"<<++tc<<": "<<ans<<endl;
	}	
}
