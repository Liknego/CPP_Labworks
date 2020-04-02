#include<iostream>
using namespace std;
void ShowArray(int iStrings, int iColumns, float** fltArray) //Function for show array in console
{
	cout << endl;
	for (int ni = 0; ni < iStrings; ni++)
	{
		for (int nj = 0; nj < iColumns; nj++)
		{
			cout << fltArray[ni][nj] << '\t';
		}
		cout << endl;
	}
}
int main()
{
	int iStrings, iColumns; //variables of strings and columns of array
	cout << "Enter number of strings in array:";
	cin >> iStrings;
	cout << endl;
	cout << "Enter number of columns in array:";
	cin >> iColumns;
	cout << endl;
	float **fltArray = new float*[iStrings]; //Memory allocation for array
	for (int ni = 0; ni < iStrings; ni++)
		fltArray[ni] = new float[iColumns];
	for (int ni = 0; ni < iStrings; ni++)
	{
		for (int nj = 0; nj < iColumns; nj++) //Entering numbers in array
		{
			cout << "Enter element[" << ni << "][" << nj << "] = ";
			cin >> fltArray[ni][nj];
			cout << endl;
		}
	}
	cout << "Starting array:" << endl; //Show in console array, created by user
	ShowArray(iStrings, iColumns, fltArray);
	cout << endl;
	for (int nj = 0; nj < iColumns; nj++) //Cycle, which makes negative numbers to zero, and sum positive numbers in every column
	{
		float fltSum = 0;
		for (int ni = 0; ni < iStrings; ni++)
		{
			if (fltArray[ni][nj] < 0)
			{
				fltArray[ni][nj] = 0;
			}
			else
			{
				fltSum += fltArray[ni][nj];
			}
		}
		cout << "Sum of elements in column " << nj + 1 << " = " << fltSum << endl;
	}
	cout <<endl << "Result array:" << endl; //Show in console the array after program operations
	ShowArray(iStrings, iColumns, fltArray);
	for (int ni = 0; ni < iStrings; ni++)
		delete[]fltArray[ni]; //Free memory
	delete[]fltArray;
	system("pause");
	return 0;
}