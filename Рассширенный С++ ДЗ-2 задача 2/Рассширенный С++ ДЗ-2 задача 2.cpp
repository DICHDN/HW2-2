/*
Описание
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число).

Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.

Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.

Пример работы программы
Введите номер счёта: 123456789
Введите имя владельца: Андрей
Введите баланс: 5000
Введите новый баланс: 6000
Ваш счёт: Андрей, 123456789, 6000
*/



#include <iostream>
#include <windows.h>
#include <string>


struct bank_account
{
	int number_account;
	std::string name_account;
	float balans;
};

bank_account new_balans(bank_account abonent, float balans)
{
	abonent.balans = balans;
	return abonent;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bank_account abonent;
	float balans;

	std::cout << "Введите номер счета: ";
	std::cin >> abonent.number_account;
	std::cout << std::endl;
	std::cout << "Введите имя держателя счета: ";
	std::cin >> abonent.name_account;
	std::cout << std::endl;
	std::cout << "Введите баланс счета: ";
	std::cin >> abonent.balans;
	std::cout << std::endl;
	std::cout << "Ваш счет " << abonent.name_account << ", " << " номер: " << abonent.number_account << ", баланс: " << abonent.balans << std::endl;
	
	std::cout << "Введите новый баланс счета: ";
	std::cin >> balans;
	std::cout << std::endl;
	abonent = new_balans(abonent, balans);

	std::cout << "Ваш счет " << abonent.name_account << ", " << " номер: " << abonent.number_account << ", баланс: " << abonent.balans << std::endl;
	
	return 0;
}