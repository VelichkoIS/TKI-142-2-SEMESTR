#include <iostream>
#include "stock.h"

int main(void)
{
	setlocale(LC_ALL, "Russian");
	Stock* package1 = new Stock;
	package1->show();
	delete package1;
	stock package2("Рога и копыта", 100, 4.6);
	package2.show();
	return 0;
}