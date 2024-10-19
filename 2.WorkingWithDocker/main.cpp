// Homework "COUNTER"

#include <iostream>

using namespace std;

class Counter
{
private:
	int count;

public:
	Counter(int initial = 1) : count(initial) {}

	void add()
	{
		count++;
	}

	void subtract()
	{
		count--;
	}

	int actualNum()
	{
		return count;
	}

};


int main()
{
	string Action;
	string inAnswer;
	int initialValue = 1;

	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> inAnswer;

	if (inAnswer == "да")
	{
		cout << "Введите начальное значения счетчика: ";
		cin >> initialValue;
	}

	Counter counter(initialValue);

	while (true)
	{
		cout << "Введите команду ('+', '-', '=', или 'x' )";
		cin >> Action;
		if (Action == "+")
		{
			counter.add();
		}
		else if (Action == "-")
		{
			counter.subtract();
		}
		else if (Action == "=")
		{
			cout << counter.actualNum() << endl;
		}
		else if (Action == "x")
		{
			cout << "До свидания! " << endl;
		}
		else
		{
			cout << "Некорректная команда.Попробуйте снова." << endl;
		}

	}

	return 0;

}