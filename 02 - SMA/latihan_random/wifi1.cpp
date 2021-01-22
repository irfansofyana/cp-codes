#include <bits/stdc++.h>
using namespace std;
int n;
string temp;
int main(){
	int kecil=0,besar=0;
	
	cin>>n;
	for (int i=1;i<=n;i++){
		cin.ignore();
		getline(cin,temp);
		kecil=0;besar=0;
		for (int j=0;j<temp.length();j++){
			if (temp[j]>='a' && temp[j]<='z') kecil++;
			else if (temp[j]>='A' && temp[j]<='Z') besar++;
		}
		if (i==1)
			cout<<besar<<" "<<kecil<<endl;
		else
		 	cout<<besar+1<<" "<<kecil<<endl;
	}
	return 0;
}
