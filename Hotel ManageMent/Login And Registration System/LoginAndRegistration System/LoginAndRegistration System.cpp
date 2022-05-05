#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void Login();
void Registration();
void Forgot();
void Exit();

int main()
{
	int Choice;
	cout << "\t\t\t____________________________________________________________\n\n\n";
	cout << "\t\t\t__________________Welocme to the login page__________________\n\n\n";
	cout << "\t\t\t____________________________ Menue ___________________________\n\n\n";
	cout << endl;

	cout << "\t Press 1 to LOGIN                |" << endl;
	cout << "\t Press 2 to Register	     		|" << endl;
	cout << "\t Press 3 to Help,Forgot Passwprd |" << endl;
	cout << "\t Press 4 to Exit                 |" << endl;

	cout << "\n\t\t\t Please Enter Your Choice : ";
	cin >> Choice;
	cout << endl;

	switch (Choice)
	{
	case 1:
		Login();
		break;

	case 2:
		Registration();
		break;

	case 3:
		Forgot();
		break;

	case 4:
		Exit();
		break;

	default:
		cout << "<---------------- Please Select From The Given Menue ---------------->";


	}



}
void login()
{
	int count;
	string UserID, Password, ID, Pass;
	system("cls"); //Clear Screen//
	cout << "\t\t\t\<---------------- Please Enter Username and Password ---------------- >";
	cout << "\t\t\t\ USERNAME ";
	cin >> UserID;
	cout << "\t\t\t PASSWORD";
	cin >> Pass;

	ifstream input("Records.txt");

	while (input >> ID >> Pass)
	{
		if (ID == UserID && Pass == Password)
		{
			count = 1;
			system("cls");

		}
		input.close();
		if (count == 1)
		{
			cout << UserID << "Your Login is Sucessfull\n Thanks For logging in !";
			main();
		}
		else {
			cout << "\n************ Login Error ************\n Please Check Your UserName";
			main();
		}
	}





}

//Login Block End//

void Registration()
{
	string RUserID, RPassword, RID, RPass;
	system("cls");
	cout << "\t\t\t Enter The Desire  Username";
	cin >> RUserID;
	cout << "\t\t\t Enter password ";

	ofstream f1("Records.txt", ios::app);
	f1 << RUserID << ' ' << RPassword << endl;
	system("cls");

	cout << " Registration Is Sucessfull";


}

void Forgot()
{
	int Option;
	system("cls");

	cout << " FOrgot the password?  No worries \n";
	cout << "Press 1 to search your ID by name ";
	cout << "Press 2 to go back to the main menu" << endl;
	cout << "\t\t\t Enter Your Choice :  ";
	cin >> Option;

	switch (Option)
	{
	case 1:
	{
		int count = 0;
		string SUserID, SID, SPass;
		cout << "\t\t\t Enter the username which you remembered :  ";
		cin >> SUserID;

		ifstream f2("records.txt");
		while (f2 >> SID >> SPass)
		{
			if (SID == SUserID)
			{
				count = 1;
			}
			f2.close();
			if (count == 1)
			{
				cout << "\n\n Your Account is found !\n\n";
				cout << "Your Password is : " << SPass;

			}
			else
			{
				cout << "\t\t\t Sorry Your Account is Not Found!\n\n\n" << endl;
				main();

			}
			break;


		}


	}
	}
}

	
	


