class Static
{
public:
	Static() : inta(0) {}
//	static getnum() { return getinta(); }
	int getinta() const { return inta; }
	static int sint;
	const static int csint = 100;
	int inta;
};
