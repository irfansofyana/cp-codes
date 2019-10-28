#include <bits/stdc++.h>
using namespace std;
int i,j,banyak;
string s;
int A[5];
bool tanda=false;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>s;
	for (i=0;i<s.length();i++){
		if (s[i]=='n') A[0]++;
		else if (s[i]=='i') A[1]++;
		else if (s[i]=='e') A[2]++;
		else if (s[i]=='t') A[3]++;
	}
	/*for (i=0;i<4;i++) cout<<A[i]<<" ";
	cout<<endl;*/ bool pertama=true;  
	while (A[0]>0 && A[1]>0 && A[2]>0 && A[3]>0){
		tanda=false;
		if (pertama){
			A[0]-=3;
			pertama=false;
		} 
		else A[0]-=2;
		A[1]-=1;
		A[2]-=3;
		A[3]-=1;
		for (i=0;i<4;i++) {
			if (A[i]<0){
				tanda=true;
				break;
			}
		}
		if (!tanda) banyak++;
		else break;
	}
	cout<<banyak<<endl;
	return 0;
}
