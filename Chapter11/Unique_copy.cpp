#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		cerr << "usage: Unique_copy filename" << endl;
		return -1;
	}

	ifstream infile(argv[1]);
	if (!infile)
	{
		cerr << "file not exists" << endl;
		return -1;
	}
	// read words
	string line, word;
	vector<string> svec;
	istringstream strstream;
	while (getline(infile, line))
	{
		strstream.str(line);
		while (strstream >> word)
			svec.push_back(word);
		strstream.clear();
	}
	infile.close();

	list<string> uniquelist;
	sort(svec.begin(), svec.end());
	unique_copy(svec.begin(), svec.end(), back_inserter(uniquelist));
	list<string>::iterator iter = uniquelist.begin();
	while (iter != uniquelist.end())
	{
		cout << *iter << "\t";
		iter++;
	}
	cout << endl;



	int iary[] = {1, 2, 5, 10, 5, 2};
	list<int> ilist(iary, iary + 6);
	vector<int> ivec;
	unique_copy(ilist.begin(), ilist.end(), back_inserter(ivec));
	vector<int>::iterator iveciter = ivec.begin();
	while (iveciter != ivec.end())
	{
		cout << *iveciter << "\t";
		++iveciter;
	}
	cout << endl;
	return 0;
}
