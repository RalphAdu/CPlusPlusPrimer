#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

bool IsShorter(const string &str1, const string &str2);
bool GT6(const string &str);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		cerr << "usage: UniqueSortCountIf filename" << endl;
		return -1;
	}
	
	ifstream infile(argv[1]);
	if (!infile)
	{
		cerr << "file not exists" << endl;
		return -1;
	}
	// get the words from file
	string line;
	string word;
	istringstream strstream;
	vector<string> vec;
	while (getline(infile, line))
	{
		strstream.str(line);
		while (strstream >> word)
			vec.push_back(word);
		strstream.clear();
	}

	vector<string>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter << "\t";
		++iter;
	}
	cout << endl;

	// sort the words
	sort(vec.begin(), vec.end());
	// unique the words
	iter = unique(vec.begin(), vec.end());
	vec.erase(iter, vec.end());

	stable_sort(vec.begin(), vec.end(), IsShorter);
	iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter << "\t";
		++iter;
	}
	cout << endl;

	vector<string>::size_type count = count_if(vec.begin(), vec.end(), GT6);
	cout << "Total " << count << " words 6 characters or longer" << endl;

	return 0;
}

bool IsShorter(const string &str1, const string &str2)
{
	return str1.size() < str2.size();
}

bool GT6(const string &str)
{
	return str.size() >= 6;
}
