#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i=0 ; i<s.size() ; i++){
        if (s[i] == 'A' || s[i]== 'I' || s[i]=='U' || s[i]=='E' || s[i]=='O' || s[i]=='Y'){
            continue;
        }
        else if (s[i] == 'a' || s[i]== 'i' || s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='y'){
            continue;
        }
        else if (s[i] > 65 && s[i] <= 90){
            cout << '.';
            putchar(tolower(s[i]));
        }
        else {
            cout << '.' << s[i];
        }
    }
}