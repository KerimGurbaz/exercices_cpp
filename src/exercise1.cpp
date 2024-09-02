#include <iostream>
using namespace std;

int main() {
    int n, p;

    // İlk kısım
    n = p = 0;
    while (n < 5)
        n += 2;
    p++;
    cout << "A: n = " << n << " p = " << p << "\n";

    // İkinci kısım.
    n = p = 0;
    while (n < 5) {
        n += 2;
        p++;
    }
    cout << "B: n = " << n << " p = " << p << "\n";

    return 0;
}
