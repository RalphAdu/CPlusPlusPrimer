#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string filename = "testfile";
    ifstream infile(filename.c_str());
    if (!infile)
    {
	cerr << "can't open file" << endl;
	return 1;
    }
    istringstream linestream;
    string line, word;
    while (!infile.eof())
    {
	getline(infile, line);
	cout << "***********Original line************\n" << line << endl;
	linestream.str(line);
	cout << "***********Separated*************" << endl;
	while (linestream >> word)
	    cout << word << " ";
	cout << endl;
	linestream.clear();
	//linestream.str("");
    }
    infile.close();
    return 0;
}
