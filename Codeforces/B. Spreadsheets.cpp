#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,t;
long long kali[25],ans;
int x,y;
string s,p;
int A[100];

void isiarr(){
	kali[0]=1;
	for (i=1;i<=25;i++){
		kali[i]=26*kali[i-1];
	}
}

string ubah(int x){
	int l,id=0,bt;
	string ans="";
	bt=x;
	if (x==0) ans="Z";
	while (x>0) {
		if (x%26==0) x-=26;
		l=x%26;
		if (l==0) A[id]=26;
		else A[id]=l;
		id++;
		x/=26;
	}
	for (int z=0;z<id;z++){
		ans=char(A[z]+64)+ans;
	}
	return ans;
}

int konvert(string s){
	stringstream ss(s);
	int result;
	return ss>>result?result:0;
}

int main(){
	isiarr();
	cin >> t;
	while (t--) {
		cin>>s;
		memset(A,0,sizeof A);
		if (s[0]=='R' && (s[1]>='1' && s[1]<='9') && (s.find('C')>=0 && s.find('C')<s.size())){
			int idx,k;
			string temp;
			idx=s.find('C');
			temp=s.substr(idx+1,s.size()-(idx+1)+1);
			k=konvert(temp);
		//	cout<<k<<endl;
			cout<<ubah(k)<<s.substr(1,idx-1)<<endl;
		}
		else {
			p="";
			for (i=0;i<s.size();i++){
				if (s[i]>='A' && s[i]<='Z') p=p+s[i];
				else break;
			}
		//	cout<<p<<endl;
			ans=0;
			for (j=0;j<p.size();j++){
				ans+=(int(p[j])-64)*kali[p.size()-(j+1)]; 
			}
			cout<<'R'<<s.substr(i,s.size()-i+1)<<'C'<<ans<<endl;
		}
	}
	return 0;
}
