#include "CustomerOrders.h"

CustomerOrders::CustomerOrders()
{
	orderName = "";
	orderPrice = 0.0;
}
CustomerOrders::~CustomerOrders() {}

void CustomerOrders::setOrderName(string orderN)
{
	orderName = orderN;
}
void CustomerOrders::setOrderPrice(double orderP)
{
	orderPrice = orderP;
}

string CustomerOrders::getOrderName() const
{
	return orderName;
}
double CustomerOrders::getOrderPrice() const
{
	return orderPrice;
}

CustomerOrders& CustomerOrders::operator=(const CustomerOrders order)
{
	this->orderName = order.orderName;
	this->orderPrice = order.orderPrice;
	return(*this);
}
