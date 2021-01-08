#include <iostream>
using namespace std;

int Binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << Binarytodecimal(n) << endl;

    return 0;
}
