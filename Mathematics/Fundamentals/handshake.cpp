#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        cout << (n * (n - 1)) / 2 << endl;
        t--;
    }
    return 0;
}
