#include<iostream>
using namespace std;
long int FindFactorial(int nFactorial)//Function for finding factorial
{
	if (nFactorial == 0)
	{
		return 1;
	}
	return nFactorial * FindFactorial(nFactorial - 1);
}
double SolvingFunction(float fltx) //Function for finding sum
{
	const float fltAccuracy = 0.001; //Accuracy
	double dblAddition = 0, dblSum = 0; //Variables of addition and sum
	int ik = 1;
	do
	{
		dblAddition = (pow(-1, ik + 1) / FindFactorial(2 * ik)) * pow((fltx / 3), 4 * ik);
		dblSum += dblAddition;
		ik++;
	} while (dblAddition > fltAccuracy); //Cycle goes while last addition is bigger than accuracy
	return dblSum;
}
int main()
{
	float fltx; //Enter meaning of x
	cout << "Find sum of (((-1)^(k+1))/(2*k)!)*(x/3)^(4*k)" << endl;
	cout << "Enter x (float number): ";
	cin >> fltx;
	cout << endl;
	cout << "Program see your data as x = " << fltx << endl; //Show result of entering (if user will try enter something uncorrect)
	cout << "Result is: " << SolvingFunction(fltx) << endl; //Working of function and show result in console
	system("pause");
	return 0;
}