#include <iostream>

using namespace std;

int main()
{
    int n, t;
    string s;
    
    cin >> n >> t;
    cin >> s;
    
    for (int y(0); y<t; y++){
        for (int i(0); i<s.size(); i++){
            if (s[i] == 'B' and s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    
    cout << s << '\n';

    return 0;
}
