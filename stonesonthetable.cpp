#include <iostream>
using namespace std;


int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int temp = 0;
    int i=0;
    while (n--){
        if (s[i] == s[i+1]){
            temp++;
        }
        i++;
    }
    cout << temp << endl;

    return 0;
}