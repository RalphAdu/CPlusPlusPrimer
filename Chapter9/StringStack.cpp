#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string word;
    stack<string> sstack;
    while (cin >> word)
    {
	sstack.push(word);
    }

    while (!sstack.empty())
    {
	word = sstack.top();
	sstack.pop();
	cout << word << " ";
    }
    cout << endl;
    return 0;
}
