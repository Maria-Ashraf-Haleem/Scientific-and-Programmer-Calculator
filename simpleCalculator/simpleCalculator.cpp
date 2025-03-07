#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
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

void showProgrammer()
{
	cout << "---------------------------------------------------------\n\n";
	cout << "        Decimal              |         Binary            \n ";
	cout << "                            |                           \n";
	cout << "    ----------------         |       --------------      \n\n";
	cout << "                             |                            \n";
	cout << "      Hexadecimal            |          Octal            \n";
	cout << "                             |                           \n\n";
	cout << "1- Decimal to any other system \n";
	cout << "2- any other system to Decimal \n";
	cout << "3- Hexadecimal to octal and vice versa \n";
	cout << "4- Octal to Binary and vice versa \n";
	cout << "5- Hexadecimal to Binary and vice versa \n";
	cout << "---------------------------------------------------------\n";
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
		showProgrammer();
		cout << "\nEnter a number that represent the operation you want to do: \n\n";
		cout << "The operation = ";
		int inp;
		cin >> inp;
		if (inp == 1) //  Decimal to any other system 
		{
			cout << "Enter the number you want to convert it from Decimal: \n";
			int n;
			cin >> n;
			cout << "Enter the system number you want to convert to it: \n";
			int x;
			cin >> x;
			int rem = 0;
			string result = "";
			while (n > 0)
			{
				rem = n % x;
				if (rem < 10)
				{
					result += (char)('0' + rem);
				}
				else
				{
					result += (char)('A' + rem - 10);
				}
				n = n / x;
			}
			reverse(result.begin(), result.end());
			cout << "The number is : " << result;
		}
		else if (inp == 2) // any other system to Decimal
		{
			cout << "Enter the number you want to convert to decimal:\n";
			int n, x;
			cin >> n;
			cout << "Enter the Base:\n";
			cin >> x;
			int res = 0;
			int i = 0;
			while (n > 0)
			{
				res += pow(x, i) * (n % 10);
				i++;
				n /= 10;
			}
			cout << "The number is : " << res;
		}
		else if (inp == 3) // Hexadecimal to octal and vice versa
		{
			int input;
			cout << "1- Hexadecimal to octal " << endl;
			cout << "2- octal to Hexadecimal " << endl;
			cin >> input;
			if (input == 1)
			{
				string s;
				cout << "Enter the number:  ";
				cin >> s;
				transform(s.begin(), s.end(), s.begin(), ::toupper);
				string res = "";
				int len = s.length();
				for (int i = 0; i < len; i++) // ãä åíßÓÇÏíÓíãÇá áÈÇíäÑí//// 
				{
					switch (s[i])
					{
					case 'A':
						res += "1010";
						break;
					case 'B':
						res += "1011";
						break;
					case 'C':
						res += "1100";
						break;
					case'D':
						res += "1101";
						break;
					case'E':
						res += "1110";
						break;
					case'F':
						res += "1111";
						break;
					case '0':
						res += "0000"; 
						break;
					case'1':
						res += "0001";
						break;
					case'2':
						res += "0010";
						break;
					case'3':
						res += "0011";
						break;
					case'4':
						res += "0100";
						break;
					case'5':
						res += "0101";
						break;
					case'6':
						res += "0110";
						break;
					case'7':
						res += "0111";
						break;
					case'8':
						res += "1000";
						break;
					case'9':
						res += "1001";
						break;
					default:
						cout << "Invalid hexadecimal character!" << endl;
						return 1;
					}
				}
				//// ÈÚÏ ßÏå åäÍæáå ãä ÈÇíäÑí áÇæßÊÇá///////
				while (res.length() % 3 != 0)
				{
					res = "0" + res;
				}
				int len2 = res.length();
				string octal = "";
				for (int i = 0, j = 1, k = 2; i < len2; i += 3, j += 3, k += 3)
				{
					if (res[i] == '0' && res[j] == '0' && res[k] == '0')
					{
						octal = octal + "0";
					}
					else if (res[i] == '0' && res[j] == '0' && res[k] == '1')
					{
						octal = octal + "1";
					}
					else if (res[i] == '0' && res[j] == '1' && res[k] == '0')
					{
						octal = octal + "2";
					}
					else if (res[i] == '0' && res[j] == '1' && res[k] == '1')
					{
						octal = octal + "3";
					}
					else if (res[i] == '1' && res[j] == '0' && res[k] == '0')
					{
						octal = octal + "4";
					}
					else if (res[i] == '1' && res[j] == '0' && res[k] == '1')
					{
						octal = octal + "5";
					}
					else if (res[i] == '1' && res[j] == '1' && res[k] == '0')
					{
						octal = octal + "6";
					}
					else if (res[i] == '1' && res[j] == '1' && res[k] == '1')
					{
						octal = octal + "7";
					}
				}
				cout << "The OCTAL number is : " << octal;
			}
			else if (input == 2)
			{

			}
		}
	}
	return 0;

}