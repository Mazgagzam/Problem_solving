#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> list;
    for (int i = 1; i <= n; i++) {
        auto it = find(p.begin(), p.end(), i);
        int index = distance(p.begin(), it) + 1;
        list.push_back(index);
    }

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }

    return 0;
}
