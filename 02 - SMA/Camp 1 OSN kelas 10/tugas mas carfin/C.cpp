#include <bits/stdc++.h>
using namespace std;

bool cek(char c){
	if ((int(c)>=65 && int(c)<=90) || (int(c)>=97 && int(c)<=122))
		return true;
	else return false;
}
bool cek1(char c){
	if ((int(c)>=65 && int(c)<=90) || (int(c)>=97 && int(c)<=122) || (int(c)>=48 && int(c)<=57))
		return true;
	else return false;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,n,i,j,pos,mulai;
	int banyak,frek;
	string A[1000],sementara,s;
	
	cin>>n;
	getline(cin,s);
	for (i=1;i<=n;i++){
		getline(cin,s);
			banyak=0;
			frek=0;
			pos=0;
			m=s.find('#',pos);
			while ((m<s.length())){
				banyak=0;
				if (s[m+1]=='#')
					m=m+1;
				else if (cek(s[m+1])){
					mulai=m;
					frek++;
					j=m+1;
					while (j<s.length()){
						if (cek1(s[j])){
							banyak++;
							j++;
						}
						else{
							if (s[j]=='#')
								m=j+1;
							else
								m=j;
							break;
						}
					}
					A[frek]=s.substr(mulai,banyak+1);
					if (j==s.length())
						break;
					else
						m=s.find('#',m);
				}
				else if (cek(s[m+1])==false)
					m=s.find('#',m+1);
			}
			cout<<"Case #"<<i<<": "<<frek<<endl;
			for (j=1;j<=frek;j++)
				cout<<A[j]<<endl;
	}
	return 0;
}
