#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		cerr << "usage IOStream_iterator filename" << endl;
		return -1;
	}

	ifstream infile(argv[1]);
	if (!infile)
	{
		cerr << "file not exists" << endl;
		return -1;
	}

	istream_iterator<string> cin_it(infile);
	istream_iterator<string> eof;
	ostream_iterator<string> out_iter(cout, "\t");


	vector<string> svec(cin_it, eof);
	sort(svec.begin(), svec.end());

	ofstream outfile("words_unique");
	if (!outfile)
	{
		cerr << "cannot open out file " << endl;
		return -1;
	}
	ostream_iterator<string> outfile_iter(outfile, " ");
	unique_copy(svec.begin(), svec.end(), outfile_iter);
	outfile.close();


/*
	vector<string> svec(cin_it, eof);
	sort(svec.begin(), svec.end());
	unique_copy(svec.begin(), svec.end(), out_iter);
	cout << endl;
*/
/*
	while (cin_it != eof)
	{
		*out_iter = *cin_it++;
	}
	cout << endl;
*/
/*	
	vector<string> ivec(cin_it, eof);

	vector<string>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter << "\t";
		++iter;
	}
	cout << endl;
*/
	infile.close();

	return 0;
}
