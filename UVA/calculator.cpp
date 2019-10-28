#include <bits/stdc++.h>
using namespace std;
string s,temp;
int i,sum;
double ans;
string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	while (cin>>s){
		sum=0; int sum1=0;
		for (i=0;i<s.length();i++){
			if (s[i]>='a' && s[i]<='z'){
				sum+=int(s[i])-96;
			}
			else if (s[i]>='A' && s[i]<='Z'){
				sum+=int(s[i])-64;
			}
		}
		temp=ubah(sum);
		for (i=0;i<temp.length();i++){
			sum1+=int(temp[i])-48;
		}
		if (sum1>=sum) ans=100;
		else ans=(double(sum1)/sum)*100;
		cout<<fixed<<showpoint;
		cout<<setprecision(2);
		cout<<ans<<" %"<<endl;
	}
	return 0;
}
