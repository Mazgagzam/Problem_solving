#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int count = 0;
    cin >> n;
    
    int nums[5] = {100, 20, 10, 5, 1};
    
    for (int i=0; i<5; i++){
        if (n>0){
            count += (n/nums[i]);
            n -= (n/nums[i])*nums[i];
        }
    }
  
    cout << count << '\n';
    return 0;
}
