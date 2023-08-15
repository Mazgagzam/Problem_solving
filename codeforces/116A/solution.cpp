#include <iostream>

using namespace std;


int main()
{
    int capacity(0);
    int capacity_max(0);
    
    int n;
    int a, b;
    cin >> n;
    
    for (int i(0); i<n; i++){
        cin >> a >> b;
        
        capacity -= a;
        capacity += b;
        
        if (capacity > capacity_max)
            capacity_max = capacity;
    }
    
    cout << capacity_max << '\n';
    
    return 0;
}
