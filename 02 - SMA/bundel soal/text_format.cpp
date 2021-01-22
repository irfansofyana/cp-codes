#include <bits/stdc++.h>
using namespace std;
 
int t,tc,i,j,spasi;
string temp,input,s[10000];
int maks,idx;
int awal,banyak;
 
int main() {
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> maks;
        getchar();
        idx = 0;                                                      
        while (getline(cin,input) && input!="END") {
            i = 0;
            while (input[i]==' ') i++;
            spasi = input.find(' ',i);
            if (!(spasi>=0 && spasi<input.size())) {
            	s[idx] = input.substr(i,input.size()-i);
            	idx++;
			}
			else{
			while (spasi>=0 && spasi<input.size()) {
                temp = input.substr(i,spasi-i);
                //cout<<temp<<endl;
                s[idx] = temp;
                idx++;
                i = spasi+1;
                while (input[i]==' ' && i<input.size()) i++;
                spasi = input.find(' ',i);
                if (!(spasi>=0 && spasi<input.size())) {
                    temp = input.substr(i,input.size()-i);
                    if (input[input.size()-1]!=' ') {
                            s[idx] = temp;
                            idx++;
                    }
                }
            }
        	}
        }
        cout << "Case #"<<++tc<<':' << endl;
        i = 0;
        //for (i=0;i<idx;i++) cout<<s[i]<<" "<<s[i].size()<<endl;
        while (i<idx) {
            cout<<s[i];
            banyak = s[i].size();
            j = i+1;
            while (banyak+s[j].size()+1<=maks) {
                cout<<" "<<s[j];
                banyak+=s[j].size()+1;
                j++;
            }
            cout<<"\n";
            i = j;
        } 
    }
}
