#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverse(string const &s)
{
    string rev(s.rbegin(), s.rend());
    return rev;
}

int main()
{
    string s, t;
    
    cin >> s;
    cin >> t;
    
    cout << (t == reverse(s) ? "YES" : "NO") << '\n';

    return 0;
}
