#include <iostream>

using namespace std;

int main()
{
    int m = 240;
    int k = 0, n = 0;
    cin >> n >> k;

    int i = 0;

    while ((n >= i+1) and (m - (i+1) * 5 >= k)) {
        i++;
        m -= 5 * i; 
    }

    cout << i << '\n';

    return 0;
}
