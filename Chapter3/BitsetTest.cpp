#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
    bitset<16> bs1;
    bitset<16> bs2(0xffff);
    bitset<32> bs3(0xffff);
    bitset<128> bs4(0xffff);
    string str1 = "1100";
    bitset<8> bs5(str1);
    string str2 = "10000";
    bitset<4> bs6(str2);
    string str3 = "111111110000000011001101";
    bitset<32> bs7(str3, 5, 4);
    bitset<32> bs8(str3, str3.size() - 4);
    bitset<32> bs9(7);

    cout << "bs1: " << bs1 << endl;
    cout << "bs1 has bit 1? " << bs1.any() << endl;
    cout << "bs1 hasn't any bit 1? " << bs1.none() << endl;
    cout << "bs1 bit 1 num： " << bs1.count() << endl;
    cout << "bs1 size: " << bs1.size() << endl;
    cout << "bs1[8] = " << bs1[8] << endl;
    cout << "bs1.test(8): " << bs1.test(8) << endl;
    cout << "bs1.set(8): " << bs1.set(8) << endl;
    cout << "bs1.test(8): " << bs1.test(8) << endl;
    cout << "bs1.reset(8): " << bs1.reset(8) << endl;
    cout << "bs1.test(8): " << bs1.test(8) << endl;
    cout << "bs1.flip(): " << bs1.flip() << endl;
    cout << "bs1: " << bs1 << endl;
    cout << "bs1.flip(8): " << bs1.flip(8) << endl;
    cout << "bs1: " << bs1 << endl;
    cout << "bs1.to_ulong(): " << bs1.to_ulong() << endl;
    cout << bs2 << endl;
    cout << bs3 << endl;
    cout << bs4 << endl;
    cout << bs5 << endl;
    cout << bs6 << endl;
    cout << bs7 << endl;
    cout << bs8 << endl;
    cout << bs9 << endl;

    return 0;
}
