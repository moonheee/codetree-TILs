#include <iostream>
#include <algorithm>
using namespace std;

void printGCD(int n, int m) {
    int GCD = 1;
    int min_nm = min(n, m);

    for (int i = 2; i <= min_nm; i++)
        if (n % i == 0 && m % i == 0)
            GCD = i;
    cout << GCD;
    return ;
}

int main() {
    int n, m;

    cin >> n >> m;
    printGCD(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}