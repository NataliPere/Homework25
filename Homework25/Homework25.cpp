#include <iostream>
#include <string>

//������ 2.
bool Palindrom_world(std::string str) {
	int size = 0;
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] != str[str.size() - i - 1]){
			return false;
		}
	}
return true;
}

//������ 3.
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
//������ 4.
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
	//������ 1.
	std::cout << "������ 1.\n";
	std::string str;
	str = "Hello world!";
	std::cout << str << "\n";
	std::string new_str;
	char sym;
	sym = 'o';
		for (int i = 0; i < str.length(); i++) 
		if ((str[i]) == sym)
			new_str += sym;
		std::cout << "����� ������: " << new_str << "\n";
		std::cout << "\n";

	//������ 2.
	std::string world;
	std::cout << "������ 2.\n";
	std::cout << "������� �����: ";
	std::cin >> world;
	Palindrom_world(world);
	if(Palindrom_world(world))
		std::cout << "����� ���������.";
	else
		std::cout << "����� - �� �������� �����������.";
	std::cout << "\n\n";


	//������ 3.
	std::cout << "������ 3.\n";
	std::string str2;
	str2 = "������������! ��� ���� ����? � ������, �� ��������� ���������.\n";
	std::cout << str2;
	std::cout << "����� ���������� ��������: " << sum_sym(str2);
	std::cout << "\n\n";

	//������ 4.
	std::cout << "������ 4.\n";
	std::string str3;
	str3 = "Hello world!";
	char sym3 = 'o';
	std::cout << "������: " << str3 << "\n";
	std::cout << "������: " << sym3 << "\n";
	std::cout << "���������: " << find_sym(str3, sym3);
	std::cout << "\n";

	return 0;
}
