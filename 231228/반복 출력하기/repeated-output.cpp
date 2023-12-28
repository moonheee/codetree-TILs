#include <iostream>
using namespace std;

void printLines(int line) {
    for (int i = 0; i < line; i++)
        cout << "12345^&*()_\n";
    return ;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    printLines(N);
    return 0;
}