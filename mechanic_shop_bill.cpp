#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of parts replaced: ";
    cin >> n;

    float price, total = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter price of part " << i << ": ";
        cin >> price;

        if (price > 1500) {
            cout << "Premium Part" << endl;
        } else {
            cout << "Standard Part" << endl;
        }

        total += price;
    }

    cout << "Total Bill: " << total << endl;

    return 0;
}
