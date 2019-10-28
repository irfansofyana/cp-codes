#include <bits/stdc++.h>
using namespace std;
int l,n,i,idx1,idx2;
int R[2000000],D[2000000];
string s;
bool ada=false;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>l && l!=0){
		cin>>s;  ada=true;
		i=0; idx1=0; idx2=0;
		while (i<s.length()){
			if (s[i]=='Z') {
				ada=false; break;
			}
			else if (s[i]=='R') {
				R[idx1]=i;
				idx1++;
				i++;
			}
			else if (s[i]=='D') {
				D[idx2]=i;
				idx2++;
				i++;
			}
			else i++;
		}
		if (!ada) cout<<0<<endl;
		else{
			sort(R,R+idx1);
			sort(D,D+idx2);
			cout<<abs(R[0]-D[0])<<endl;
		}
	}
}
