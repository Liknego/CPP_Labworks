#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Detail //Struct "Detail"
{
	string strDetailType; //Field - Type of detail
	int iNumberOfDetails; //Field - Count of details in the party
};
int main()
{
	vector <Detail> DetailsList; //Array of structs
	DetailsList.push_back({ "D11",20 }); //Pushing elements in array
	DetailsList.push_back({ "D21",10 });
	DetailsList.push_back({ "D31",15 });
	DetailsList.push_back({ "D22",30 });
	DetailsList.push_back({ "D41",25 });
	DetailsList.push_back({ "D23",6 });
	DetailsList.push_back({ "D32",22 });
	DetailsList.push_back({ "D25",30 });
	cout << "Details list:" << endl;
	for (int ni = 0; ni < DetailsList.size(); ni++) //Show details list in console
	{
		cout << DetailsList[ni].strDetailType << " - " << DetailsList[ni].iNumberOfDetails << endl;
	}
	cout << endl;
	int iDetailsCount = 0;
	for (int ni = 0; ni < DetailsList.size(); ni++) //Counting of details, which corresponds to the description
	{
		if (DetailsList[ni].strDetailType[0] == 'D' && DetailsList[ni].strDetailType[1] == '2' && DetailsList[ni].iNumberOfDetails >= 15)
		{
			iDetailsCount++;
		}
	}
		cout << "Count of details, which has \"D2\" in their type and their count more or equal to 15: " << iDetailsCount << endl<<endl;
		system("pause");
		return 0;	
}