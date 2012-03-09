#include <iostream>
class ConstOverload
{
public:
	ConstOverload() : m_mem(0) {};
	int getMem() const { return m_mem; }
	int getMem(int a) { return m_mem;}
private:
	int m_mem;
};

using namespace std;
int main()
{
	ConstOverload mem;
	cout << mem.getMem() << endl;
	cout << mem.getMem(2) << endl;
	return 0;
}
