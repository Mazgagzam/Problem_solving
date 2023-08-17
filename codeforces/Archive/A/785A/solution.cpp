#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    
    string s;
    int count = 0;
    
    for (int i; i<n; i++){
        cin >> s;
        
        if (s=="Icosahedron") count += 20;
        
        if (s=="Dodecahedron") count += 12;
        
        if (s=="Octahedron") count += 8;
        
        if (s=="Cube") count += 6;
        
        if (s=="Tetrahedron") count += 4;
    }
    
    cout << count << '\n';
    
    
    return 0;
}
