#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void showCalculator()
{
	cout << "-------------------------------------------------------" << endl;
	cout << "|              Scientific Calculator                  |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    '+'       |         '-'        |       '*'       |" << endl;
	cout << "|    Add       |     Substract      |     Multiple    |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    'm'       |        '/'         |        'l'      |" << endl;
	cout << "|   Modulus    |       Divide       |        Log      |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    'S'       |         'C'        |        'P'      |" << endl;
	cout << "|   Square     |        Cube        |       Power     |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    's'       |         'c'       |        't'       |" << endl;
	cout << "|    Sin       |         Cos       |        Tan       |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|   'r'        |         'k'        |        '.'      |" << endl;
	cout << "|   Root       |        Clear       |       Close     |" << endl;
	cout << "-------------------------------------------------------" << endl;
}
void showAnswer(double answer)
{
	cout << "-------------------------------------------------------" << endl;
	cout << "|              The Result is:         " << answer << endl;
	cout << "|                                                     |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    '+'       |         '-'        |       '*'       |" << endl;
	cout << "|    Add       |     Substract      |     Multiple    |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    'm'       |        '/'         |        'l'      |" << endl;
	cout << "|   Modulus    |       Divide       |        Log      |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    'S'       |         'C'        |        'P'      |" << endl;
	cout << "|   Square     |        Cube        |       Power     |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|    's'       |         'c'       |        't'       |" << endl;
	cout << "|    Sin       |         Cos       |        Tan       |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "|   'r'        |         'k'        |        '.'      |" << endl;
	cout << "|   Root       |        Clear       |       Close     |" << endl;
	cout << "-------------------------------------------------------" << endl;
}

int main()
{
	cout << "Do you want any Calculator ? \n\n";
	cout << "1- Scientific Calculator (Press \"1\")\n2- Programmer Calculator (Press \"2\")\n\n";
	int type;
	cin >> type;
	system("cls");
	if (type == 1)
	{
		double n1 = 0.0;
		double n2 = 0.0;
		double answer = 0.0;
		char op = '\n';
		bool again = 0;
		while (op != '.')
		{
			if (again == 1)
			{

				showAnswer(answer);
				cout << "Enter an Operation to perform: \n";
				while (true)
				{
					cin >> op;
					if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'm' || op == 'l' ||
						op == 'S' || op == 'C' || op == 'P' || op == 'r' || op == 'k' || op == 't' ||
						op == 's' || op == 'c' || op == '.')
					{
						break;
					}
					else
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Please Enter a Valid operation like + , -, *, / , m, s, etc ...\n";
					}
				}
				if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'm')
				{
					n1 = answer;
					cout << "Enter your Number: \n";
					cin >> n2;
				}
				else if (op == 'k' || op == '.')
				{
					// Don not take any thing

				}
				else
				{
					n1 = answer;
				}
				system("cls"); ////////////////////////
			}
			else
			{
				showCalculator();
				cout << "Enter an Operation to perform: \n";
				while (true)
				{
					cin >> op;
					if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'm' || op == 'l' ||
						op == 'S' || op == 'C' || op == 'P' || op == 'r' || op == 'k' || op == 't' ||
						op == 's' || op == 'c' || op == '.')
					{
						break;
					}
					else
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Please Enter a Valid operation like + , -, *, / , m, s, etc ...\n";
					}
				}

				if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'm')
				{
					cout << "Enter the first number: \n";
					cin >> n1;
					cout << "Enter the Seconed number: \n";
					cin >> n2;
				}
				else if (op == 'k' || op == '.')
				{
					// Don not take any thing

				}
				else
				{
					cout << "Enter your Number: \n";
					cin >> n1;
				}
				again = 1;
				system("cls"); /////////////////////////////////////
			}
			switch (op)
			{
			case'+':
				answer = n1 + n2;
				break;
			case'-':
				answer = n1 - n2;
				break;
			case'*':
				answer = n1 * n2;
				break;
			case'/':
				if (n2 == 0)
				{
					cout << "Cannot Divide by Zero Bro !!!\n";
					break;
				}
				else
				{
					answer = n1 / n2;
					break;
				}
			case 'm':
				if (floor(n1) != n1 || floor(n2) != n2)
				{
					cout << "Modulus operation requires integers!\n";
					continue;
				}
				answer = int(n1) % int(n2);
				break;
			case'l':
				answer = log(n1);
				break;
			case'S':
				answer = n1 * n1;
				break;
			case'C':
				answer = n1 * n1 * n1;
				break;
			case 'P':
				double exponent;
				cout << "Enter the exponent: \n";
				cin >> exponent;
				answer = pow(n1, exponent);
				break;
			case's':
				answer = sin(n1);
				break;
			case'c':
				answer = cos(n1);
				break;
			case't':
				answer = tan(n1);
				break;
			case'r':
				answer = sqrt(n1);
				break;
			case'k':
				again = 0;
				break;
			case'.':
				break;
			default:
				cout << "Invalid Operation bro! \n";
				break;
			}
		}
	}
	else
	{

	}
	return 0;

}