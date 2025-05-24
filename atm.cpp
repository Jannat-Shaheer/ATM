#include <iostream>
#include <windows.h>
using namespace std;
int amount = 0;
int money = 0;
int account_num;
string name;
void account(void)
{
	int num;
	cout << "Press 1 for savings account \nPress 2 for profit account" << endl;
	cin >> num;
	if (num == 1)
	{
		cout << "You have savings account" << endl;
	}
	else if (num == 2)
	{
		cout << "You have profit account " << endl;
	}
	else
	{	
		while (1)
		{
		cout << "Invalid choice. " << endl;
		account();
		break;
		}
	}
	cout << endl;
}

void withdrawal(void)
{
	int choice;
	cout << "To withdraw 1000, press 1 \nTo withdraw 2000, press 2 \nTo withdraw 5000, press 3 \nTo withdraw 10,000, press 4 \nTo enter another amount, press 5: ";
	cin >> choice;
	if (choice >=1 && choice <=4)
	{
		cout << "..." << endl;
		Sleep(2000);
		switch (choice)
		{
			case 1: amount = 100;
					cout << "1000 withdrawn successfully." << endl;
					break;
			case 2: amount = 2000;
					cout << "2000 withdrawn successfully." << endl;
					break;
			case 3: amount = 5000;
					cout << "5000 withdrawn successfully." << endl;
					break;
			case 4: amount = 10000;
					cout << "10,000 withdrawn successfully." << endl;
					break;
		}
	}
	else
	{
		cout << "Enter the amount you want to withdraw : ";
		cin >> amount;
		Sleep(2000);
		cout << amount << " withdrawn successfully. " << endl;
	}
	cout << endl;
}

void statement (void)
{
	cout << "4th Feb 24: 50,000 cash withdrawal." << endl;
	cout << "5th Feb 24 : 8000 cash withdrawal" << endl;
	if (amount != 0)
	{
		cout << "Today: " << amount << " cash withdrawal " << endl;
	}
	if (money != 0)
	{
		cout << "Today: " << money << " transferred to " << account_num << " held  by " << name << endl;
	}
	cout << endl;
}

void funds (void)
{
	cout << "Enter the account you want to transfer funds to: ";
	cin >> account_num;
	cout << "Enter the name of the acoount holder : ";
	cin >> name;
	cout << "Enter the amount you want to transfer: ";
	cin >> money;
	cout << "..." << endl;
	Sleep(3000);
	cout << money << " transferred to " << account_num << " successfully." << endl;
	cout << endl;
}

void status(void)
{
	int remaining = 50000;
	remaining = remaining - amount - money;
	cout << "..." << endl;
	Sleep (2000);
	cout << "You have " << remaining << " in your account" << endl;
	cout << endl;; 
}
int main()
{
	int pin, num;
	cout << "Welcome to ATM\nEnter your 4 digit PIN: ";
	cin >> pin;
	while (1)
	{
		if (pin > 999 && pin <=9999)
		{
			cout << "Press 1 for account type\nPress 2 for cash withdrawal\nPress 3 for Mini statement\n";
			cout << "Press 4 for funds transfer\nPress 5 for amount status\nPress 6 to exit" << endl;
			cin >> num;
			if (num>0 && num<6)
			{	
				switch (num)
				{
					case 1: account();
							break;
					case 2: withdrawal();
							break;
					case 3: statement();
							break;
					case 4: funds();
							break;
					case 5: status();
							break;
				}
			}
			else if (num == 6)
			{
				cout << "Exiting...";
				Sleep(2000);
				cout << "Thank you for using our Virtual ATM" << endl;
				break;
			}
			else 
			{
				cout << "Invalid choice. Please re-enter number." ;
				cin >> num;
			}
		}
		else
		{
			cout << "Invalid pin. Please re-enter pin. ";
			cin >> pin;
		}
	}
	return 0;
}
