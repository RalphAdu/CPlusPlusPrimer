#include <iostream>
#include <bitset>
#include <stdexcept>

using namespace std;
int main()
{
    const size_t bigUlongSize = sizeof(unsigned long) * 8 + 1;
    cout << "unsigned long size: " << bigUlongSize + 1 << endl;
    bitset<bigUlongSize> bitSet;
    bitSet.set();
    cout << "bitset content: " << bitSet << endl;
    try
    {
        unsigned long ulong = bitSet.to_ulong();
        cout << ulong << endl;
    } catch (runtime_error err)
    {
        cout << err.what() << endl;
    }
    return 0;
}
