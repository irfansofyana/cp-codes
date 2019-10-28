#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int arr[MAXN+5], ans[MAXN+5];
int prefiks[MAXN+5], n, l[MAXN+5], r[MAXN+5];
stack<int> st;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; ++i){
        while (!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if (!st.empty()) {
            l[i] = st.top();
        }else {
            l[i] = 0;
        }
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i =  n; i >= 1; --i){
        while (!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if (!st.empty()){
            r[i] = st.top();
        }else {
            r[i] = n+1;
        }
        st.push(i);
    }
    for (int i = 1; i <= n; ++i){
        //l[i]+1 r[i]-1
        // cout << "xx " << i << " " << l[i] << " " << r[i] << endl;
        prefiks[r[i]-l[i]-1] = max(prefiks[r[i]-l[i]-1], arr[i]);
    }
    for (int i = n; i >= 1; --i){
        ans[i] = (i == n ? prefiks[i] : max(prefiks[i], ans[i+1]));
    }
    for (int i = 1; i <= n; ++i){
        cout << ans[i] << " ";
    }cout << '\n';
    return 0;
}