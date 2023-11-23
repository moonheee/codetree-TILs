#include <iostream>
using namespace std;

int n;

void input()
{
    cin >> n;
    return ;
}

void run1(int i, int n)
{
    if (i > n)
    {
        cout << "\n";
        return ;
    }

    cout << i << " ";
    run1(++i, n);
    return ;
}

void run2(int n)
{
    if (n < 1)
    {
        cout << "\n";
        return ;
    }

    cout << n << " ";
    run2(--n);
    return ;
}

int main() {
    input();
    run1(1, n);
    run2(n);
    return 0;
}