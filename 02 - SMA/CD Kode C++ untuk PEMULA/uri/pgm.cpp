#include <bits/stdc++.h>
using namespace std;

int konversi(char a)
{
	int p;
	switch (a)
	{
		case '0' : p=0; break;
		case '1' : p=1; break;
		case '2' : p=2; break;
		case '3' : p=3; break;
		case '4' : p=4; break;
		case '5' : p=5; break;
		case '6' : p=6; break;
		case '7' : p=7; break;
		case '8' : p=8; break;
		case '9' : p=9; break;
	}
	return p;
}
int main(){
	int n,i,hasil;
	string s;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>s;
		if (s[1]==s[3])
			hasil=konversi(s[1])*konversi(s[3]);
		else
			{
				if (isupper(static_cast<int>(s[2]))==1)
					hasil=abs(konversi(s[1])-konversi(s[3]));
				else
					hasil=konversi(s[1])+konversi(s[3]);
			}
		cout<<hasil<<endl;
	}
return 0;
}