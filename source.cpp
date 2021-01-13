#include <iostream>
#include <string.h>

using namespace std;

int  main() 
{
	
	int int_enc_pass[50] = { 0 };
	char pass[50] = { 0 };
	int secondary[50] = { 0 };
	char char_enc_pass[100] = { 0 };
	char encrypted_pass[100] = { 0 };
	int c;
	cout << "Type your password that you wish to encrypt : ";
	gets_s(pass);


	cout << "Select encryption level:" << endl;
	cout << "1.Less secured Encryption" << endl;
	cout << "2.More advanced encryption" << endl;
	cin >> c;

	switch (c) 
	{
	case 1:
		cout << "The original password :  '";
		for (int i = 0; i < strlen(pass); i++) 
		{
			cout << pass[i];
		}
		cout << "' " << endl;
		cout << "The encrypted password : ";

		for (int i = 0; i < strlen(pass); i++) 
		{
			int_enc_pass[i] = pass[i] + 12;
			cout << int_enc_pass[i];
		}
		cout << endl;	break;
	case 2: cout << "The original password : '";
		for (int i = 0; i < strlen(pass); i++)
		{
			cout << pass[i];
		}
		cout << "' " << endl;

		cout << "The ecnrypted password : ";
		for (int i = 0; i < (strlen(pass) * 2); i++)
		{
			secondary[i] = pass[i] + 7;
			char_enc_pass[2 * i + 1] = secondary[i];
			char_enc_pass[2 * i] = i + 189;
			encrypted_pass[i] = char_enc_pass[i];
			cout << encrypted_pass[i];
		}
		cout << endl;
		break;
	}

	cout << "This code was written by Usman Hamid and contributions were made :D" << endl;
	system("pause");
	return (0);
}
