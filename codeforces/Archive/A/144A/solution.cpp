#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    
    cin >> n;
    
    int a[n];
    int mx = 0;
    int mn = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        
        if (a[i] > a[mx]) mx = i;
        
        if (a[i] <= a[mn]) mn = i;
    }
    
    int count = mx+(n-mn-1);
    
    if (mn<mx) count--;
    cout << count << '\n';    
    return 0;
}
