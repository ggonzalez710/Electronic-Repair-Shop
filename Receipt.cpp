#include "Receipt.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Receipt::Receipt()
{
	customerName = "";
	totalPrice = 0.0;
}

Receipt::~Receipt() {}

void Receipt::setCustomerName(string cn)
{
	customerName = cn;
}

void Receipt::setReceiptDate(int ry, int rm, int rd)
{
	receiptDate.setYear(ry);
	receiptDate.setMonth(rm);
	receiptDate.setDay(rd);
}

void Receipt::setOrders(CustomerOrders customer_orders[], int size)
{
	for (int i = 0; i < size; i++)
	{
		ordered_services[i] = customer_orders[i];
	}
}

//void Receipt::setItems(Item receiptItems[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		items[i] = receiptItems[i];
//	}
//}

//void Receipt::setTotalPrice(double tp)
//{
//	totalPrice = tp;
//}

string Receipt::getCustomerName() const
{
	return customerName;
}

int Receipt::getReceiptDay() const
{
	return receiptDate.getDay();
}
int Receipt::getReceiptMonth() const
{
	return receiptDate.getMonth();
}
int Receipt::getReceiptYear() const
{
	return receiptDate.getYear();
}

double Receipt::getTotalPrice(int size)
{
	for (int i = 0; i < size; i++)
	{
		totalPrice += ordered_services[i].getOrderPrice();
	}
	return totalPrice;
}
