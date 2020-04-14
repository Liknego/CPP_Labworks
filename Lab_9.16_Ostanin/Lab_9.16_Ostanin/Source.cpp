#include<iostream>
#include<math.h>
using namespace std;
float EnteringVariable() //Validation of user entering
{
	float fltx;
	while (!(cin >> fltx))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Bad x! Re-enter :";
	}
	return fltx;
}
int main()
{
	cout << "We have a polynom: P = a0 + a1*x + a2*x^2 + ... + an*x^n" << endl << endl;
	float fltx = 0;
	int in = 0;
	cout << "Enter x:";
	fltx = EnteringVariable();
	cout << endl;
	cout << "Enter n:";
	in = EnteringVariable();
	cout << endl;
	float* flta = new float[in]; //Array of a - dynamic memory allocation
	for (int nj = 0; nj < in; nj++)
	{
		cout << "Enter a" << nj + 1 << ':';
		flta[nj] = EnteringVariable();
		cout << endl;
	}
	float fltP = 0;
	for (int nj = 0; nj < in; nj++) //Finding polynom
		fltP += flta[nj] * pow(fltx, nj);
	cout << "Answer:" << fltP << endl;
	delete[]flta; //Free memory from array 
	system("pause");
	return 0;
}