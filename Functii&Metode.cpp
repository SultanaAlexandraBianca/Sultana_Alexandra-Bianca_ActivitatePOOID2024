#include <iostream>
using namespace std;
//Macrodefinitii:
#define Patrat(x) x*x
//ENUM:
enum Materii {POO, DAM, SDD=5,CTS};
int suma(int a, int b, int c)
{
	return a + b + c;

}
int suma(int a, int b)
{
	return a + b;
}
void main()
{
	cout << "Suma 13 + 24= " << suma(13, 24) << endl;
	cout << "Suma 13 + 24 + 35= " << suma(13, 24,35) << endl;

	cout << "Macrodefinitii: " << endl;
	//Macrodefinitii
	int m = 4;
	cout << "Current value of m before first call: " << m << endl;
	cout << "Patrat(a): " << Patrat(m) << endl;

	cout << "Current value of m before second call: " << m << endl;
	cout << "Patrat(a + 2): " << Patrat(m + 2) << endl;

	cout << "Current value of m before third call: " << m << endl;
	cout << "Patrat(++a): " << Patrat(++m) << endl;
	cout << "ENUM: " << endl;
	Materii curs = POO;
	if (curs == POO)
	{
		cout << "Avem cursul de POO" << endl;
	}
	curs = SDD;


}