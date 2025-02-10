#pragma once
#include <string>
using namespace std;

class Stock
{
private:
	string company;
	long shares;
	double sharePrice;
	double totalValue;
	void setTotal();

public:
	Stock(const string &co = "", long num = 0, double price = 0.0);
	Stock(long num, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void updatePrice(double newprice);
	void show();;
	void acquire(const string& co, long number, double price);
	~Stock();
};