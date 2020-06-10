#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar4()
{
	MenuSeminar4();

	while (true)
	{
		char section;

		cout << " \n Which section of seminar 4 do you want to choose? "
			<< "\n\tEnter number--> ";
		cin >> section;

		switch (section)
		{
		case '1':
			T type = ChooseType(type);

			switch (type)
			{
			case '1':
				Seminar4_1_ProdWithoutNeg(1);
				break;
			case '2':
				Seminar4_1_ProdWithoutNeg(1.0f);
				break;
			case '3':
				Seminar4_1_ProdWithoutNeg(1.0);
				break;
			}
			break;

		case '2':
			T type = ChooseType(type);

			switch (type)
			{
			case '1':
				Seminar4_2_Max_Sum(1);
				break;
			case '2':
				Seminar4_2_Max_Sum(1.0f);
				break;
			case '3':
				Seminar4_2_Max_Sum(1.0);
				break;
			}
			break;
		default:
			cout << "Erorr";
			break;
		}
		char flag;

		cout << "\n Want to choose another section in the seminar(1),want to choose another seminar any\n ";
		cin >> flag;

		if (flag != '1')
			break;
		else
			MenuSeminar4();


	}
}
