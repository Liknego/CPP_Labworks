#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector <string> strVector; //Array, created with vector container
	int iElNumber; //Variable - array's size
	string strValidation; //String for validation of user data, which was entered in console
	cout << "Enter size of Array:";
	cin >> iElNumber;
	cout << endl;
	for (int ni = 0; ni < iElNumber; ni++)
	{
		cout << "Enter a content of " << ni + 1 << "st string:"; //Pushing numbers in array
		cin >> strValidation;
		cout << endl;
		if (strValidation[0] != 45 && isdigit(strValidation[0]) == 0)
		{
			strValidation[0] = '0';
		}
		for (int nj = 1; nj < strValidation.size(); nj++)
		{
			if(isdigit(strValidation[nj]) == 0)
			{
				strValidation[nj] = '0';
			}
		}
		strVector.push_back(strValidation);
	}
	system("cls"); //clear console
	for (int ni = 0; ni < strVector.size(); ni++) //Show array in console
	{
		cout<< stof(strVector[ni])<<" ";
	}
	cout << endl<<endl;
	int iEvenSum = 0, iOddSum = 0; //Variables of sums of even and odd numbers
	int iStringNumber; //Variable for converted string (into number)
	for (int ni = 0; ni < strVector.size(); ni++)
	{
		iStringNumber = stof(strVector[ni]);
		if (iStringNumber % 2 == 0) //if number is even
		{
			iEvenSum += iStringNumber;
		}
		else//if number is odd
		{
			iOddSum += iStringNumber;
		}
	}
	cout << "Sum of even numbers: " << iEvenSum << endl; //Show sums
	cout << "Sum of odd numbers: " << iOddSum << endl;
	system("pause");
	return 0;
}