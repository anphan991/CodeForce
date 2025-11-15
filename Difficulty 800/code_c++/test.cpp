#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int tongChan = 0, tongLe = 0, demLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            tongChan += a[i];
        else {
            tongLe += a[i];
            demLe++;
        }
    }

    cout << "Tong cac so chan: " << tongChan << endl;
    if (demLe > 0)
        cout << "Trung binh cong so le: " << (float)tongLe / demLe << endl;
    else
        cout << "Khong co so le trong mang" << endl;

    return 0;
}
