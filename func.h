const int L = 5;

struct Abonent {
	char surname[21];
	char address[21];
	char phoneNumber[11];
};

void findAbonent(Abonent abonents[L], char surname[21], char address[21]);
Abonent inputAbonent();