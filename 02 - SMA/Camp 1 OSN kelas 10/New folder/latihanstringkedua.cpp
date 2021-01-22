#include <bits/stdc++.h>
using namespace std;
int main(){
	int j,k,besar=0,kecil=0,n;
	string s;
	int diubah,banyak;
	bool p=false;
	
	cin>>s;
	for (int i=0;i<s.length();i++){
		if (int(s[i]>=97) && (int(s[i])<=122))
			kecil++;
		else if (int(s[i]>=65) && int (s[i])<=90)
			besar++;
	}
	n=s.length();
	if (kecil>(n/2)){
		diubah=kecil-(n/2);
		j=0;
		banyak=0;
		while (j<s.length()){
			if ((int(s[j])>=97) && (int(s[j])<=122)){
				s[j]=char(int(s[j])-32);
				banyak++;
				if (banyak==diubah)
					break;
				else
					j++;
			}
			else
				j++; 
		}
		cout<<s<<endl;	
	}
	else if (besar>(n/2)){
		diubah=(besar-(n/2));
		k=0;
		banyak=0;
		while (k<s.length()){
			if ((int(s[k])>=65) && (int(s[k])<=90)){
				s[k]=char(int(s[k])+32);
				banyak++;
				if (banyak==diubah)
					break;
				else
					k++;
			}
			else
				k++; 
		}
		cout<<s<<endl;
	}
	else if (kecil==(n/2))
		cout<<s<<endl;
	return 0;
}
