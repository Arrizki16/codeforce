#include <bits/stdc++.h>
using namespace std;

int flag = 0;

int main(){
    int n;
    int ex, ent;
    int temp= 0;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> ex >> ent;
        temp += (ent-ex);
        if (temp > flag){
            flag = temp;
        }
    }
    cout << flag << endl;

    return 0;
}