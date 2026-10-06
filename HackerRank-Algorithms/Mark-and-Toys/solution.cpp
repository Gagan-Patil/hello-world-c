#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int count = 0;
    int total = 0;

    for (int price : prices) {
        if (total + price <= k) {
            total += price;
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}