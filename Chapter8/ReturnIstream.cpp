#include <iostream>
using namespace std;
std::istream &ReadIstream(std::istream &is)
{
    string str = "";
    std::cout << "istream state: " << is.rdstate() << endl;
    while (is >> str, !is.eof())
    {
	std::cout << "Input >> " << str << endl;
    }
    std::cout << "istream state: " << is.rdstate() << endl;
    is.clear();
    std::cout << "istream state: " << is.rdstate() << endl;

    return is;
}

int main()
{
    string str = "";
    cin = ReadIstream(cin);
    cin >> str;
    cout << "in main, cin read value >> " << str << endl;

    return 0;
}
