#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0;
	string s;
	int p=0,c=0;
	
	cin>>s;
	i=0;
	while (i<s.length()){
		if (s[i]=='C'){
			if (s[i+1]=='C'){
				if (s[i+2]=='C'){
					if (s[i+3]=='C'){
						if (s[i+4]=='C'){
							banyak++;
							i=i+5;
						}
						else if (s[i+4]=='P'){
							banyak++;
							i=i+4;
						}
					}
					else if (s[i+3]=='P'){
						banyak++;
						i=i+3;
					}
				}
				else if (s[i+2]=='P'){
					banyak++;
					i=i+2;
				}
			}
			else if (s[i+1]=='P'){
				banyak++;
				i++;
			}
		}
	else{
		if (s[i]=='P'){
			if (s[i+1]=='P'){
				if (s[i+2]=='P'){
					if (s[i+3]=='P'){
						if (s[i+4]=='P'){
							banyak++;
							i=i+5;
						}
						else if (s[i+4]=='C'){
							banyak++;
							i=i+4;
						}
					}
					else if (s[i+3]=='C'){
						banyak++;
						i=i+3;
					}
				}
				else if (s[i+2]=='C'){
					banyak++;
					i=i+2;
				}
			}
			else if (s[i+1]=='C'){
				banyak++;
				i++;
			}
	}
}
}
	cout<<banyak<<endl;
}
