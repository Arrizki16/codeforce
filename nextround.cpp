#include <iostream>
using namespace std;

int main(){
    int flag;
    int n,score;
    int s[52];
    cin >> n >> score;
    for (int i=0 ; i<n ; i++){
        cin >> s[i];
    }
    flag = 0;
    for (int i=0 ; i<n ; i++){
        if (s[i] == 0) continue;
        else if (s[i] >= s[score-1]){
            flag++;
        }
    }
    cout << flag << endl;

    return 0;
}