#include "func.h"
#include "string.h"
#include <iostream>

void findAbonent(Abonent abonents[L], char surname[21], char address[21]) {
	for (int i = 0; i < L; i++)
		if (_stricmp(abonents[i].surname, surname) == 0 && _stricmp(abonents[i].address, address) == 0) {
			std::cout << "Номер телефону абонента: " << abonents[i].phoneNumber << std::endl;
			return;
		}
	std::cout << "На жаль, ми не можемо знайти такого абонента :_(" << std::endl;
}

Abonent inputAbonent() {
	Abonent abonent;
	std::cout << "Введіть прізвище абонента(до 20 символів): ";
	std::cin >> abonent.surname;
	std::cout << "Введіть номер абонента(до 10 символів): ";
	std::cin >> abonent.phoneNumber;
	std::cout << "Введіть адресу абонента(до 20 символів, без пробілів): ";
	std::cin >> abonent.address;
	std::cout << std::endl;
	return abonent;
}
