#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> d = {"ドド", "スコ"};
    unsigned int state = -1;
    random_device rnd;
    for (;;) {
        int rand = rnd() % 2;
        cout << d[rand];
        state = (state << 1) | rand;
        if ((state & 4095) == 1911) break;
        //011101110111
    }
    cout << "ラブ注入♡" << endl;
}
