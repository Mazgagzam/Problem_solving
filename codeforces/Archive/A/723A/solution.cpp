#include <iostream>

using namespace std;


int main()
{
    int x1 = 0, x2 = 0, x3 = 0;
    
    cin >> x1 >> x2 >> x3;
    
    int m1 = min(min(x1, x2), x3);
    int m2 = max(x1, max(x2, x3));

    int distance = 100000;    
    int distance1 = 0;
    
    for (int i=m1; i<m2; i++){
        distance1 = abs(x1-i)+abs(x2-i)+abs(x3-i);
        
        if (distance1 < distance)
            distance = distance1;
    }
    
    cout << distance << "\n";
    
    return 0;
}
