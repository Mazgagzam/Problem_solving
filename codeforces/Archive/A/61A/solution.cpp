#include <iostream>

using namespace std;

string solve(string s1, string s2)
{
    string s("");
    
    for (int i=0; i < s1.size(); i++){
        if (s1[i] != s2[i]) s += "1";
        else s += "0";
    }
    
    return s;
}

int main() {
    string s1, s2;
    
    cin >> s1 >> s2;
    
    
    cout << (solve(s1, s2)) << '\n';
    
    return 0;
}
