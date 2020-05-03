#include <iostream>
using namespace std;

int main(){
    int flag = 0;
    string s1;
    string s2;
    cin >> s1 >> s2;
    for (int i=0 ; i<s1.size() ; i++){
        if (s1[i] >= 65 && s1[i] <= 90){
            s1[i] += 32;
        }
        if (s2[i] >= 65 && s2[i] <=90){
            s2[i] += 32;
        }
        if (int (s1[i]) < int(s2[i])){
            cout << "-1" << endl;
            flag = 1;
            break;
        }
        else if (int (s1[i]) > int (s2[i])){
            cout << "1" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout << "0" << endl;

    return 0;
}