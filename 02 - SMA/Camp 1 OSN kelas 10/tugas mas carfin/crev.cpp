#include <bits/stdc++.h>
using namespace std;

bool cek(char c){
	if ((int(c)>=65 && int(c)<=90) || (int(c)>=97 && int(c)<=122) || (int(c)>=48 && int(c)<=57))
		return true;
	else return false;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,n,i,j,pos,awal;
	int banyak,frek;
	string A[1000],sementara,s;
	
	cin>>n;
	for (i=0;i<=n;i++){
		getline(cin,s);
		if (i>0){
			banyak=0;
			frek=0;
			pos=0;
			m=s.find('#',pos);
			while ((m<s.length()) && (m>=0)){
				banyak=0;
				if (cek(s[m+1])==false)
					m=s.find('#',m+1);
				else{
					awal=m;
					frek++;
					j=m+1;
					while (j<s.length()){
						if (cek(s[j])){
							banyak++;
							j++;
						}
						else{
							if (s[j]=='#')
								m=awal+banyak+1;
							else
								m=awal+banyak;
							break;		
						}	
					}
					A[frek]=s.substr(awal,banyak+1);
				}
				m=s.find('#',m);
			}
			for (i=1;i<=frek;i++)
				cout<<A[i]<<endl;
		}
	}
}
