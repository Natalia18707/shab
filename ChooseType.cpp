#include"Libraries.h"
#include"Prototypes.h"

char ChooseType(char type)
{
	while (true)
	{
		cout << "\nChoose type: ";
		cout << "\n1. Int";
		cout << "\n2. Float";
		cout << "\n3. Double";
		cout << "\nEnter type: ";
		cin >> type;

		if (type < '1' || type > '3')
			cout << "\nIncorrect type!";
		else
			break;
	}
	return type;
}