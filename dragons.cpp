#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)

void getSolve(int s, int n){
    vector <pair<int, int>> v;
    int drg, bns;
    for (int i=0 ; i<n ; i++){
        cin >> drg >> bns;
        v.push_back(make_pair(drg, bns));
    }
    sort(v.begin(), v.end());
    for (int i=0 ; i<n ; i++){
        if (s<= v[i].first){
            cout << "NO" << endl;
            return;
        }
        else {
            s += v[i].second;
        }
    }
    cout << "YES" << endl;
}
        // cin >> drg >> bns;
        // if (s<=drg){
        //     cout << "NO" << endl;
        //     break;
        // }
        // else {
        //     s+= bns;
        // }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin >> s >> n;
    getSolve(s,n);
    return 0;
}