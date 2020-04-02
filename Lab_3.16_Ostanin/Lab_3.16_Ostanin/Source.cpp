#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << "Let's find approximate value of infinite sum with accuracy e = 0.001" << endl;
	cout << "S = 1 - n/(2*3)+(n/(4*5))... + (-1)^k * (n/((k+1)*(k+2)))^k + ..." << endl;
	const double dble = 0.001; //constant e
	int in, iAccuracy, ik = 0; //variables e, accuracy and ê - creating
	double dblSum = 0; //variable of sum
	double dbladdition = 0; //addition variable
	cout << "" << endl;
	cout << "Enter n = "; //Enter in console n and accuracy
	cin >> in;
	cout << endl;
	cout << "Enter accuracy of calculations = ";
	cin >> iAccuracy;
	cout << endl;
	do //cycle, which will work, when module of addition will be bigger than e
	{
		dbladdition = pow(-1, ik) * pow(((double)in / (((double)ik + 1) * ((double)ik + 2))), ik);
		dblSum += dbladdition;
		ik++;
	} while ((abs(dbladdition)) > dble);
	cout.precision(iAccuracy); //accuracy, when result will show in console
	cout <<"Answer = "<< dblSum << endl; //result in console
	system("pause");
	return 0;
}