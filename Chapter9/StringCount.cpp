#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string line1 = "We were her pride of 10 she named us:";
    string line2 = "Benjamin, Phoenix, the Prodigal";
    string line3 = "and perspicacious pacific Suzanne";
    string sentence = line1 + ' ' + line2 + ' ' + line3;
    cout << "sentence:\n" << sentence << endl;

    string::size_type count = 0, beg_pos = 0, end_pos = 0, max_size = 0, min_size = sentence.size();
    string separators = "\t:, \r\n\v\f";
    string word = "";
    vector<string> smax, smin;

    while ((beg_pos = sentence.find_first_not_of(separators, end_pos)) != string::npos)
    {
	//cout << "beg_pos: " << beg_pos << endl;
	//cout << "end_pos: " << end_pos << endl;

	// find the end position for a word
	//for (string::size_type temp_pos = end_pos; end_pos != string::npos && end_pos <= beg_pos; ++temp_pos)
	//{
	//    end_pos = sentence.find_first_of(separators, temp_pos);
	//}
	end_pos = sentence.find_first_of(separators, beg_pos);

	// get word
	if (end_pos != string::npos)
	    word = sentence.substr(beg_pos, end_pos - beg_pos);
	else
	    word = sentence.substr(beg_pos);

	++count; // add count for the sentence

	if (word.size() > max_size)
	{
	    max_size = word.size();
	    smax.clear();
	    smax.push_back(word);
	} else if (word.size() == max_size)
	{
	    smax.push_back(word);
	}

	if (word.size() == min_size)
	{
	    smin.push_back(word);
	} else if (word.size() < min_size)
	{
	    min_size = word.size();
	    smin.clear();
	    smin.push_back(word);
	}
    }

    cout << "The sentence has " << count << " words" << endl;

    vector<string>::iterator iter = smax.begin();

    cout << "The longest words has " << max_size << " chars" << endl;
    while (iter != smax.end())
	cout << *iter++ << " ";
    cout << endl;

    iter = smin.begin();
    cout << "The shortest words has " << min_size << " chars" << endl;
    while (iter != smin.end())
	cout << *iter++ << " ";
    cout << endl;

    return 0;
}
