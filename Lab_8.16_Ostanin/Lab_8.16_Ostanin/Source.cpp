#include<iostream>
#include<fstream>
#include<istream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	ifstream Stream_Read; //Stream for reading from file
	ofstream Stream_Write; //Stream for writing in file
	cout << "//////Try for open file...//////" << endl;
	Stream_Read.open("File_Starting.txt"); //Trying for open file
	if (Stream_Read) //if file exist...
	{
		cout << "//////File \"File_Starting.txt\" was opened successfully.///////" << endl;
	}
	else //...or not
	{
		cout << "//////File \"File_Starting.txt\" don't exist. Please, create this file in app directory and put data inside.//////" << endl;
		system("pause");
		return 0;
	}
	cout << "//////Creating file \"File_Ending.txt\"..."<< endl;
	Stream_Write.open("File_Ending.txt"); //Try to create file for writing
	if (Stream_Write) //If creating successful
	{
		cout << "//////File \"File_Ending.txt\" was opened successfully.///////" << endl;
	}
	else //Bad end
	{
		cout << "//////Error of file creating. Closing program...//////" << endl;
		system("pause");
		return 0;
	}
	string strValidation; //String for validation
	char chValid; //Char for working with string for validation
	int iCounter; //Counter variable
	while (!Stream_Read.eof()) //Read line -> Convert line -> Write line. Cycle
	{
		iCounter = 0;
		strValidation = "";
		do
		{
			Stream_Read >> chValid;
			strValidation += chValid;
			iCounter++;
		} while (!Stream_Read.eof() && iCounter < 31 && chValid != ';');
		strValidation += '\n';
		Stream_Write << strValidation;
	}
	Stream_Read.close(); //Closing streams
	Stream_Write.close();
	system("pause");
	return 0;
}	