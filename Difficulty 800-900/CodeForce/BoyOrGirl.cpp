#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool seen[26] = {false};
    int cnt = 0;

    for (char c : s) {
        int x = c - 'a';
        if (!seen[x]) {
            seen[x] = true;
            cnt++;
        }
    }

    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

