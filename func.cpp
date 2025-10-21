#include "func.h"
#include "string.h"
#include <iostream>

void findAbonent(Abonent abonents[L], char surname[21], char address[21]) {
	for (int i = 0; i < L; i++)
		if (_stricmp(abonents[i].surname, surname) == 0 && _stricmp(abonents[i].address, address) == 0) {
			std::cout << "����� �������� ��������: " << abonents[i].phoneNumber << std::endl;
			return;
		}
	std::cout << "�� ����, �� �� ������ ������ ������ �������� :_(" << std::endl;
}

Abonent inputAbonent() {
	Abonent abonent;
	std::cout << "������ ������� ��������(�� 20 �������): ";
	std::cin >> abonent.surname;
	std::cout << "������ ����� ��������(�� 10 �������): ";
	std::cin >> abonent.phoneNumber;
	std::cout << "������ ������ ��������(�� 20 �������, ��� ������): ";
	std::cin >> abonent.address;
	std::cout << std::endl;
	return abonent;
}
