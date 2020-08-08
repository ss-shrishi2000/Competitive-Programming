#include<bits/stdc++.h>
using namespace std;
int x, cnt[10] = {0};

int initialize(int x) {
    while (x) {
        cnt[x % 10]++;
        x /= 10;
    }
}

bool check(int a) {
    while (a) {
        if (cnt[a % 10]) return true;
        a /= 10;
    }
    return false;
}

int main() {
    cin >> x; initialize(x);
    int res = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (check(i)) res++;
            int j = x / i;
            if (i != j && check(j)) res++;
        }
    }
    cout << res << endl;
}
