#include <iostream>
#include "func.h"
#include "windows.h"
#include "string.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Abonent abonents[L];
	char surname[21], address[21];
	for (int i = 0; i < L; i++) abonents[i] = inputAbonent();
	cout << "¬вед≥ть пр≥звище абонента: ";
	cin >> surname;
	cout << "¬вед≥ть адресу абонента: ";
	cin >> address;
	findAbonent(abonents, surname, address);
}
