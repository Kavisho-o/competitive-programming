#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {

    int n; cin>>n;
    vector<vector<int>> v(n,vector<int> (2));
    for (int i=0; i<2*n; i++) cin>>v[i][n%i];

    int fo=-1;
    int lo=-1;

    int i=0; 
    int j=n-1;

    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}