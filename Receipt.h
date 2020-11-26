#pragma once
#include "Date.h"
#include "CustomerOrders.h"
#include <string>
using namespace std;

const int MAX_SIZE = 100;

class Receipt
{
private:
	string customerName;
	Date receiptDate;
	CustomerOrders ordered_services[MAX_SIZE];
	double totalPrice;

public:
	Receipt();
	~Receipt();

	void setCustomerName(string cn);
	void setReceiptDate(int ry, int rm, int rd);
	void setOrders(CustomerOrders servicesOrdered[], int count);
	//void setItems(Item receiptItems[], int size);
	//void setTotalPrice(double tp);

	string getCustomerName() const;
	double getTotalPrice(int size);
	int getReceiptDay() const;
	int getReceiptMonth() const;
	int getReceiptYear() const;
};

