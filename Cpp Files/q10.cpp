#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int alpha=128, red=255, green=128, blue=64;
    unsigned int sum; //'unsigned' to increase range, has more than that of 'int'

    sum= (alpha*16777216)+(red*65536)+(green*256)+(blue*1);

    cout << "The color is represented as :" << sum;

    return 0;
}
