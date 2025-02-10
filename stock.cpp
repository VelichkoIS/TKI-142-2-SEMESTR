#include <iostream>
#include "Stock.h"

void Stock::setTotal()
{
	totalValue = shares * sharePrice;
}

Stock::Stock(const string& co, long num, double price)
{
	cout << "Один обьект создан" << endl;
	commpany = co;
	shares = num;
	sharePrice = price;
	setTotal();
}

Stock::Stock(long num, double price)
{
	cout << "Один обьект создан" << endl;
	commpany = "";
	shares = num;
	sharePrice = price;
	setTotal();
}

void Stock::buy(long number, double price)
{
	if (number < 0)
	{
		cout << "Число акций не может быть отрицательным. Транзакция прервана" << endl;
	}
	else
	{
		shares += number;
		sharePrice = price;
		setTotal();
	}
}

void Stock::sell(long number, double price)
{
	if (number < 0)
	{
		cout << "Число акций не может быть отрицательным. Транзакция прервана" << endl;
	}
	else 
		if (number > shares)
		{
			cout << "У Вас нет столько акций. Транзакция прервана" << endl;
		}
		else
		{
			share -= number;
			sharePrice = price;
			setTotal();
		}
}

void Stock::updatePrice(double newprice)
{
	if (newprice < 0)
	{
		cout << "Стоимость акции не может быть отрицательной. Транзакция прервана" << endl;
	}
	else
	{
		sharePrice = newprice;
		setTotal();
	}
}

void Stock::show()
{
	cout << endl << "Компания: " << company << endl <<
		"Число акций: " << shres << endl <<
		"Цена акций: " << sharePrice << endl <<
		"Стоимость пакета акций: " << totalValue << endl << endl;
}

void Stock::acquire(const string& co, long number, double price)
{
	company = co;
	if (number < 0)
	{
		cout << "Число акций не может быть отрицательным. Число акций равно 0" << endl;
		number = 0;
	}
	else
	{
		shares = number;
	}
	if (price < 0)
	{
		cout << "Стоимость акций не может быть отрицательной. Стоимость акций равна 0" << endl;
		price = 0;
	}
	else
	{
		sharePrice = price;
	}
	setTotal();
}

Stock::~Stock()
{
	cout << "Один объект удален" << endl;
}