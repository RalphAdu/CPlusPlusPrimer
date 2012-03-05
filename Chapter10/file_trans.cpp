#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    if (argc != 3)
    {
	cerr << "usage: file_trans filename1 filename2" << endl;
	return 1;
    }
    ifstream wordsmap_file(argv[1]);
    ifstream transfer_file(argv[2]);
    if (!wordsmap_file || !transfer_file)
    {
	cerr << "input file has at least one not exist." << endl;
	return 1;
    }

    string line, key, value;
    istringstream strstream;
    map<string, string> wordsmap;
    // read the wordsmap file to get the words map
    while (getline(wordsmap_file, line))
    {
	strstream.str(line);
	strstream >> key >> value;
	wordsmap.insert(make_pair(key, value));
	strstream.clear();
    }
    // read the transfer file to transfer the words and display
    strstream.clear();
    string word;
    while (getline(transfer_file, line))
    {
	strstream.str(line);
	while (strstream >> word)
	{
	    map<string, string>::iterator iter = wordsmap.find(word);
	    if (iter != wordsmap.end())
		word = iter->second;
	    cout << word << " ";
	}
	cout << endl;
	strstream.clear();
    }
    return 0;
}
