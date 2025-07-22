#include <iostream>
using namespace std;

int binaryTodecimal(int binum)
{
    int ans = 0, pow = 1, rem;
    while (binum > 0)
    {
        rem = binum % 10;
        ans = ans + (rem * pow);
        binum = binum / 10;
        pow = pow * 2;
    }
    return ans;
}
int main()
{

    cout << binaryTodecimal(1100101) << endl;
    return 0;
}
