#include <iostream>
#include <string>

int palidrome(std::string str)
{
	int start = 0;
	int end = str.length() - 1;

	while (start < end)
	{
		if (std::tolower(str[start]) != std::tolower(str[end]))
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}
int znaki(std::string str)
{
	int sym = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			sym++;
		}
	}
	return sym;
}
std::string otrezok(std::string str, char simvol)
{
	for (int i = str.length() -1; i >= 0 ; i--)
	{
		if (str[i] == simvol)
		{
			return str.substr(i);
		}
	}
	return "";
}

int main() {
	system("chcp 1251>null");
	int n;

	//Задача1
	
	std::string str = "Hello world";
	char sym;
	
	std::cout << "Введите строку: ";
	std::getline(std::cin, str);

	std::cout << "Введите символ: ";
	std::cin >> sym;

	std::string new_str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == sym)
			new_str += sym;
	}
	std::cout << new_str << std::endl;

	//Task2
	std::string pldrm;
	std::cout << "Введите слово -> ";
	std::cin >> pldrm;

	std::cout << (palidrome(pldrm) ? "Это палидром" : "Это не палидром") << std::endl;
	

	//Task3
	std::string str2;
	std::cout << "Введите предложение -> ";
	std::getline(std::cin, str2);

	std::cout << znaki(str2) << std::endl;
	

	//Task4
	std::string str3;
	char simvol;

	std::cout << "Введите строку -> ";
	std::getline(std::cin, str3);
	std::cout << "Введите символ -> ";
	std::cin >> simvol;

	std::cout << otrezok(str3, simvol) << std::endl;
	

	return 0;
}