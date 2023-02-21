#include <iostream>
#include <windows.h>

using namespace std;

class Counter {
public:
	//Конструктор
	Counter() { count = 1; }
	Counter(int count) {this -> count = count; }

	//Методы
	void plus() { count++; }
	void minus() { count--; }
	int equal() { return count; }

private:
	int count;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Russian");

	int a;
	string ans;
	char c;
	cout << "Вы хотите указать начальное значение? Введите да или нет: ";
	cin >> ans;
	if (ans == "да" || ans == "yes") {
		cout << "Введите начальное значения: ";
		cin >> a;
	}
	else {
		a = 1;
	}
	
	Counter cnt{ a };
	do{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> c;
		switch(c){
		case '+':
			cnt.plus();
			break;
		case '-':
			cnt.minus();
			break;
		case '=':
			cout << cnt.equal() << endl;
			break;
		}
	} while (c != 'x');
	
	cout << "До свидания!\n";
}
