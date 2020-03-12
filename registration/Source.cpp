#include<iostream>
#include<string>
#include "call.h"


using namespace std;

int main() {
	int action = 0;
	do
	{
		cout << "\tMENU:" << endl;
		cout << "1. Register" << endl;
		cout << "2. Sign in" << endl;
		cout << "3. Exit" << endl<<endl;
		cout << "Select action ->_";
		cin >> action;

		switch (action)
		{
		case 1: {
			reg();

		}break;

		case 2: {
			signIn();

		}break;
		
		default: {
			cout << "Please select action (1 - 3)" << endl;
		}
		}

	} while (action != 3);

	system("pause");
	return 0;
}