#include <iostream>

using namespace std;
int rev;
int rem;
int reverseInt(int n) {
    if (n == 0) return 0;
    rem = n % 10;
    rev =  rev * 10 + rem ;
    reverseInt(n / 10);

    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverseInt(n);

    return 0;
}
