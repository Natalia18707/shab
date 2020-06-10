#include"Libraries.h"
#include"Prototypes.h"
template <class T> void Seminar3()
{

	MenuSeminar3();
	while (true)
	{
		char section;

		cout << " \n Which section of seminar 3 do you want to choose? "
			<< "\n\tEnter number--> ";
		cin >> section;

		switch (section)
		{
		case '1':
			T type = ChooseType(type);

			switch (type)
			{
			case '1':
				Seminar3_1_SumOddNum(1);
				break;
			case '2':
				Seminar3_1_SumOddNum(1.0f);
				break;
			case '3':
				Seminar3_1_SumOddNum(1.0);
				break;
			}
			break;
		case '2':
			T type = ChooseType(type);

			switch (type)
			{
			case '1':
				Seminar3_2_SumBetweenFL(1);
				break;
			case '2':
				Seminar3_2_SumBetweenFL(1.0f);
				break;
			case '3':
				Seminar3_2_SumBetweenFL(1.0);
				break;
			}
			break;
		case '3':
			T type = ChooseType(type);

			switch (type)
			{
			case '1':
				Seminar3_3_Compress(1);
				break;
			case '2':
				Seminar3_3_Compress(1.0f);
				break;
			case '3':
				Seminar3_3_Compress(1.0);
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
			MenuSeminar3();


	}


}