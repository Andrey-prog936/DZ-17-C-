#include "call.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

#define cls system("cls");
#define pause system("pause");

list<reginfo> reginf;
const string fileName = "reg_info.txt";

reginfo newUser;

void reg()
{
	
	cout << "Enter nickname: ";
	cin.ignore();
	getline(cin, newUser.name);

	cout << "Enter your email: ";
	cin >> newUser.email;

	cout << "Enter your password: ";
	cin >> newUser.password;

	reginf.push_back(newUser);

	ofstream fout;
	fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Failed to contact the service." << endl;
	}
	else
	{
		fout << newUser.name << endl;
		fout << newUser.email << endl;
		fout << newUser.password << endl;
	}
	fout.close();
		pause
			cls
}

void signIn()
{
	string temp;
	string temp2;
	cout << "\tSign In" << endl;
	cout << "Enter your nickname or email: ";
	cin.ignore();
	getline(cin, temp);
	cout << "Enter your password: ";
	cin >> temp2;

	ifstream fin(fileName);
	fin.open(fileName);
	bool isOPen = fin.is_open();
	if (isOPen == false) {
		cout << "Failed to contact the service." << endl;
	}
	else
	{

		if (newUser.name == temp || newUser.email == temp && newUser.password == temp2)
		{
			cout << "Ow hello " << newUser.name << endl;
			pause
				cls
		}
		else
		{
			
		}
	}
	/*
		int a = 0;
		cout << "Data entered incorrectly" << endl;
		cout << "Want to try again?" << endl;
		cout << "1 - Yes" << endl;
		cout << "2 - No" << endl;
		cin >> a;
		switch (a)
		{
			case 1:
			{
				signIn();
			}break;
			case 2:
			{
				break;
			}
			default: 
			{
				cout << "Please select action (1 - 2)" << endl;
			}
		}
	*/
	fin.close();
}