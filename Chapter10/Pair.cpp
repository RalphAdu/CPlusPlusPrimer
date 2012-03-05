#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    typedef pair<string, int> StrIntPair;
    vector<StrIntPair> pairvec1;
    vector<StrIntPair> pairvec2;
    vector<StrIntPair> pairvec3;
    string word;
    int num;
    const int size = 5;
    int count = 0;
    while (count < size)
    {
	cout << "Input pair: string, int" << endl;
	cin >> word >> num; 
	StrIntPair pair1 = make_pair<string, int>(word, num);//make_pair(word, num); 
	StrIntPair pair2(word, num);
	StrIntPair pair3;
	pair3.first = word;
	pair3.second = num;
	
	pairvec2.push_back(pair2);
	pairvec3.push_back(pair3);
	pairvec1.push_back(pair1);

	count ++;
    }
    return 0;
}
