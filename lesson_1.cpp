
#include <iostream>

using namespace std;

//lesson 1
void les_1()
{
	int num;

	std::cout << "Введите целое число: ";

	while (true)
	{
		std::cin >> num;

		if (std::cin.good() && std::cin.peek() == '\n')
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		std::cin.clear();
		std::cout << "Введено некорректное число. Попробуйте ещё раз: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Введено целое число " << num << std::endl;
}


//lesson 2


template<typename _CharT, typename _Traits>
inline std::basic_ostream<_CharT, _Traits>&
endll(std::basic_ostream<_CharT, _Traits>& __os)
{
	return flush((__os.put(__os.widen('\n'))).put(__os.widen('\n')));
}

void les_2()
{
	std::cout << "Hello" << endll << "world";
}




int main()
{
	les_1();
	les_2();

	return 0;
}

