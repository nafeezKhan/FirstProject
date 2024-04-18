#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        // If there are enough separate packs of dog and cat food
        // or if there are enough universal packs for all dogs and cats,
        // then it's possible to buy suitable food for all animals.
        if ((a >= x && b >= y) || (a + c >= x && b + c >= y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
