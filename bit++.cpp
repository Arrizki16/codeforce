#include <iostream>
using namespace std;

int main(){
    int n, flag=0;
    cin >> n;
    string s[n];
    for (int i=0 ; i<n ; i++){
        cin >> s[i];
        if (s[i] == "++X"){
            ++flag;
        }
        else if (s[i] == "--X"){
            --flag;
        }
        else if (s[i] == "X++"){
            flag++;
        }
        else if (s[i] == "X--"){
            flag--;
        }
    }
    cout << flag << endl;
}