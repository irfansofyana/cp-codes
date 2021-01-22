/*
    CODEFORCES PROBLEM : A. Strange Addition (305A)
    AUTHOR : IRFAN SOFYANA PUTRA
*/

#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[110];
vector<int> ans;
bool ada;

int banyak_digit(int a){
    int res=0;
    if (a==0) return 1;
    while (a>0) {
        res++;
        a/=10;
    }
    return res;
}

int digit_ke(int a,int b){
    int cnt=1;
    while (a>0) {
        if (cnt==b) return a%10;
        cnt++;
        a/=10;
    }
    if (b==0) return 0;
}
int main(){
    cin.tie(0);
    cin >> n;
    for (i=0;i<n;i++) cin >> A[i];
    sort(A,A+n);
    j = 1;
    ada = false;
    for (i=0;i<n;i++) {
        if (!ada && banyak_digit(A[i])>=j && digit_ke(A[i],banyak_digit(A[i])-1)==0) {
            ans.push_back(A[i]);
            if (A[i]==0) ada = true;
            else j = banyak_digit(A[i])+1;
        }
        else if (ada) {
            ans.push_back(A[i]);
            ada = false;
            j = banyak_digit(A[i])+1;
        }
    }
    if (ans.size()==0) {
        cout << 1 << endl;
        cout << A[0] << endl;
    }
    else {
        cout << ans.size() << endl;
        for (i=0;i<ans.size();i++) {
            if (i==0) cout << ans[i];
            else cout << " " << ans[i];
        }
        cout << "\n";
    }
}
