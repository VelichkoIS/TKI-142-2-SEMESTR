#include <iostream>
#include "Stock.h"

void Stock::setTotal()
{
	totalValue = shares * sharePrice;
}

Stock::Stock(const string& co, long num, double price)
{
	cout << "���� ������ ������" << endl;
	commpany = co;
	shares = num;
	sharePrice = price;
	setTotal();
}

Stock::Stock(long num, double price)
{
	cout << "���� ������ ������" << endl;
	commpany = "";
	shares = num;
	sharePrice = price;
	setTotal();
}

void Stock::buy(long number, double price)
{
	if (number < 0)
	{
		cout << "����� ����� �� ����� ���� �������������. ���������� ��������" << endl;
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
		cout << "����� ����� �� ����� ���� �������������. ���������� ��������" << endl;
	}
	else 
		if (number > shares)
		{
			cout << "� ��� ��� ������� �����. ���������� ��������" << endl;
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
		cout << "��������� ����� �� ����� ���� �������������. ���������� ��������" << endl;
	}
	else
	{
		sharePrice = newprice;
		setTotal();
	}
}

void Stock::show()
{
	cout << endl << "��������: " << company << endl <<
		"����� �����: " << shres << endl <<
		"���� �����: " << sharePrice << endl <<
		"��������� ������ �����: " << totalValue << endl << endl;
}

void Stock::acquire(const string& co, long number, double price)
{
	company = co;
	if (number < 0)
	{
		cout << "����� ����� �� ����� ���� �������������. ����� ����� ����� 0" << endl;
		number = 0;
	}
	else
	{
		shares = number;
	}
	if (price < 0)
	{
		cout << "��������� ����� �� ����� ���� �������������. ��������� ����� ����� 0" << endl;
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
	cout << "���� ������ ������" << endl;
}