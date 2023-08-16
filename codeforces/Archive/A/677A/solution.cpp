#include <iostream>

using namespace std;

int main()
{
    int n(0), h(0);
    int a;
    int road(0);


    cin >> n >> h;

    for (int i=0; i<n; i++){
        cin >> a;
        if (a>h)
            road += 2;
        else
            road += 1;
    }


    cout << road << '\n';
    return 0;
}
