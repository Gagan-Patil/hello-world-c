#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maximum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;

        if (height > maximum) {
            maximum = height;
            count = 1;
        }
        else if (height == maximum) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}