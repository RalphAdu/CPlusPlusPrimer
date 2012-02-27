#include <iostream>
#include <ifstream>
using namespace std;

ifstream &open_file(ifstream &in, const string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

int main()
{
    ifstream file;
    string filename = "testfile";
    string str = "" ;
    file = open_file(file, filename);
    while (!file.eof())
    {
	file >> str;
	cout << str << endl;
    } 
    file.close();
    return 0；
}
