#include <iostream>
using namespace std;

void run(int n) {
    if (n <= 0)
        return ;
    cout << "HelloWorld\n";
    run(--n);
    return ;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    run(n);
    return 0;
}