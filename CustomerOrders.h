#pragma once
#include <string>
using namespace std;

class CustomerOrders
{
private:
	string orderName;
	double orderPrice;

public:
	CustomerOrders();
	~CustomerOrders();

	void setOrderName(string orderN);
	void setOrderPrice(double orderP);

	string getOrderName() const;
	double getOrderPrice() const;

	CustomerOrders& operator=(const CustomerOrders order);
};

