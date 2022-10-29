#include <iostream>
#include <string>

//Задача 2.
bool Palindrom_world(std::string str) {
	int size = 0;
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] != str[str.size() - i - 1]){
			return false;
		}
	}
return true;
}

//Задача 3.
int sum_sym(std::string str) {
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			sum1++;
		if (str[i] == '.')
			sum2++;
		if (str[i] == ',')
			sum3++;
		if (str[i] == '!')
			sum4++;
		if (str[i] == '?')
			sum5++;
	}
		int allsum = sum1 + sum2 + sum3 + sum4 + sum5;
		return allsum;
}
//Задача 4.
std::string find_sym(std::string str, char sym) {
	
	str = "Hello world!";
	for (int i = 0; i < str.size(); i++) {
		int n = 0;
		sym = 'o';
		sym = n;
	str.substr(n);
		return str;
	
		if (str[i] != sym)
		return str = '   ';
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1.
	std::cout << "Задача 1.\n";
	std::string str;
	str = "Hello world!";
	std::cout << str << "\n";
	std::string new_str;
	char sym;
	sym = 'o';
		for (int i = 0; i < str.length(); i++) 
		if ((str[i]) == sym)
			new_str += sym;
		std::cout << "Новая запись: " << new_str << "\n";
		std::cout << "\n";

	//Задача 2.
	std::string world;
	std::cout << "Задача 2.\n";
	std::cout << "Введите слово: ";
	std::cin >> world;
	Palindrom_world(world);
	if(Palindrom_world(world))
		std::cout << "Слово палиндром.";
	else
		std::cout << "Слово - не является палиндромом.";
	std::cout << "\n\n";


	//Задача 3.
	std::cout << "Задача 3.\n";
	std::string str2;
	str2 = "Здравствуйте! Как Ваши дела? Я слышал, Вы приобрели велосипед.\n";
	std::cout << str2;
	std::cout << "Общее количество символов: " << sum_sym(str2);
	std::cout << "\n\n";

	//Задача 4.
	std::cout << "Задача 4.\n";
	std::string str3;
	str3 = "Hello world!";
	char sym3 = 'o';
	std::cout << "Строка: " << str3 << "\n";
	std::cout << "Символ: " << sym3 << "\n";
	std::cout << "Подстрока: " << find_sym(str3, sym3);
	std::cout << "\n";

	return 0;
}
