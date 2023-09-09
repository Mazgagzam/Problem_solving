#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int count = 0;
    int max = nums[0], min = nums[0];

    for (int i : nums) {
        if (i > max) {
            max = i;
            count++;
        }
        else if (i < min) {
            min = i;
            count++;
       }
    }

    cout << count << "\n";
    
    return 0;
}
