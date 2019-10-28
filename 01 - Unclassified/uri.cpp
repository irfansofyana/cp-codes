#include <bits/stdc++.h>
using namespace std;
int n,i,j,k;
string s,jawaban,smt;
string temp1,temp2;

int main(){
	cin.tie(0);
	cin>>n; getline(cin,s);
	for (i=1;i<=n;i++){
		getline(cin,s); smt="";
		for (j=0;j<s.length();j++){
			if ((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z')) smt=smt+char(int(s[j])+3);
			else smt=smt+s[j]; 
		} s=smt;
		if (s.length()%2==1){
			temp1=s.substr(0,(s.length()+1)/2);
			temp2=s.substr((s.length()+1)/2,((s.length()+1)/2)-1);
		}
		else if (s.length()%2==0){
 			temp1=s.substr(0,(s.length())/2);
			temp2=s.substr(s.length()/2,s.length()/2);
		}
		smt="";
		for (j=temp1.length()-1;j>=0;j--) smt=smt+temp1[j];
		temp1=smt;
		smt="";
		for (j=temp2.length()-1;j>=0;j--) smt=smt+temp2[j];
		temp2=smt; smt="";
		for (j=0;j<temp1.length();j++){
			smt=smt+char(int(temp1[j])-1);
		} 
		temp1=smt;
		cout<<temp2+temp1<<endl;  
	}
	return 0;
}
