#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    double num = 0;
    double s=0;
    
    for (int i=0; i<n; i++){
        cin >> num;
    
        s += num;
    }
    
    cout << (s/n) << '\n';
    
    return 0;
}
