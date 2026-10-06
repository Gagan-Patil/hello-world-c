#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    long long arr[5];
    long long total = 0;
    long long minimum = LLONG_MAX;
    long long maximum = LLONG_MIN;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        total += arr[i];
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    long long minSum = total - maximum;
    long long maxSum = total - minimum;

    cout << minSum << " " << maxSum << endl;

    return 0;
}