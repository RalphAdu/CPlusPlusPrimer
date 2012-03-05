#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <stdexcept>
using namespace std;
int main(int argc, char **argv)
{
    if (argc != 2)
    {
		throw runtime_error("usage: AuthorWork filename");
		return 1;
    }

	ifstream infile(argv[1]);
	if (!infile)
	{
		throw runtime_error("file not exist");
		return 1;
	}

	typedef multimap<string, string> authmap;
	typedef authmap::iterator authmapiter;

	string line, author, work;
	istringstream linestream;
	authmap authworkmap;
	while (getline(infile, line))
	{
		linestream.str(line);
		linestream >> author >> work;
		authworkmap.insert(make_pair(author, work));
		linestream.clear();
	}
	infile.close();
	authmap authworkmap2 = authworkmap, authworkmap3 = authworkmap;
	
	string delauth;
	cout << "Input the author you want to delete" << endl;
	cin >> delauth;
	// first delete method
	authmapiter iter = authworkmap.find(delauth);
	if (iter != authworkmap.end())
		authworkmap.erase(iter->first);
	else
		cout << "author not exists" << endl;

	cout << "elements in the map1" << endl;
	iter = authworkmap.begin();
	while (iter != authworkmap.end())
	{
		cout << iter->first << "\t" << iter->second << endl;
		++iter;
	}
	// second delete method
	authmapiter loweriter = authworkmap2.lower_bound(delauth);
	authmapiter upperiter = authworkmap2.upper_bound(delauth);
	authworkmap2.erase(loweriter, upperiter);
	cout << "elements in the map2" << endl;
	iter = authworkmap2.begin();
	while (iter != authworkmap2.end())
	{
		cout << iter->first << "\t" << iter->second << endl;
		++iter;
	}
	// thrid delete method
	pair<authmapiter, authmapiter> delpair = authworkmap3.equal_range(delauth);
	authworkmap3.erase(delpair.first, delpair.second);
	cout << "elements in the map3" << endl;
	iter = authworkmap3.begin();
	while (iter != authworkmap3.end())
	{
		cout << iter->first << "\t" << iter->second << endl;
		++iter;
	}

	return 0;
}
