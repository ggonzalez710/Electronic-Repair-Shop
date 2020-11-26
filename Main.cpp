#include "ElectronicServices.h"
#include "ComputerServices.h"
#include "ConsoleServices.h"
#include "Receipt.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Function Protoypes
void startingMessage(Receipt);
void displayMenu();
void enterServices(CustomerOrders[], int&);
void addCombos(CustomerOrders[], int&);
void manageServices(CustomerOrders[], int&);
//void finishOrder(CustomerOrders[], int&);
void newOrder();
void print_export(CustomerOrders[], int);
//void displayAbout();
void optionPhone(CustomerOrders[], int&);
void optionComp(CustomerOrders[], int&);
void optionTablet(CustomerOrders[], int&);
void optionConsole(CustomerOrders[], int&);





int main() {

	CustomerOrders orders[MAX_SIZE];
	Receipt receiptObj;
	int option, count = 0;

	startingMessage(receiptObj);	

	do
	{
		displayMenu();
		cin >> option;
		system("CLS");

		switch (option)
		{
		case 1:
			enterServices(orders, count);
			break;
		case 2:
			addCombos(orders, count);
			break;
		case 3:
			manageServices(orders, count);
			break;
		case 5:
			newOrder();
			break;
		case 6:
			print_export(orders, count);
			break;
		}
	} while (option != 8);


	return 0;

}

void startingMessage(Receipt receipt_obj)
{
	Date rDate;
	string userName;
	int day, month, year;
	char validDate;

	cout << "\tWelcome! Please enter your name and today's date:\n\n";
	cout << "Name: ";
	cin.ignore();
	getline(cin, userName);
	receipt_obj.setCustomerName(userName);

	cout << "Enter today's date:\n";
	do
	{
		cout << "Day: ";
		cin >> day;

		cout << "1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n"
			"7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n"
			"Enter the month's number: ";
		cin >> month;

		while (month < 1 || month > 12)
		{
			cout << "Please enter a number between 1-12: ";
			cin >> month;
		}

		cout << endl;

		cout << "Year: ";
		cin >> year;

		receipt_obj.setReceiptDate(year, month, day);

		rDate.setDay(day);
		rDate.setMonth(month);
		rDate.setYear(year);

		validDate = rDate.isValidDate();
		if (validDate == 'i')
		{
			cout << "Not a valid date. Please re-enter the date.\n";
		}
	} while (validDate == 'i');
}

void displayMenu()
{
	cout << "\tElectronics Repair Shop\n"
		<< "1. Enter a new service\n"
		<< "2. Add combos\n"
		<< "3. Manage services\n"
		<< "4. Confirm order\n"
		<< "5. Enter a new order\n"
		<< "6. Print/Export\n"
		<< "7. About\n"
		<< "8. Exit\n"
		<< "Enter an option: ";
}

void enterServices(CustomerOrders orders[], int& count)
{
	int option;

	do
	{
		cout << "\tChoose a device to repair\n";
		cout << "1. Phone\n"
			<< "2. Computer\n"
			<< "3. Tablet\n"
			<< "4. Console\n"
			<< "5. Exit\n"
			<< "Enter an option: ";
		cin >> option;

		while (option < 1 || option > 5)
		{
			cout << "Please choose an option between 1-4: ";
			cin >> option;
		}

		switch (option)
		{
		case 1:
			optionPhone(orders, count);
			system("CLS");
			break;
		case 2:
			optionComp(orders, count);
			system("CLS");
			break;
		case 3:
			optionTablet(orders, count);
			system("CLS");
			break;
		case 4:
			optionConsole(orders, count);
			system("CLS");
			break;
		}
	} while (option != 5);
}

void optionPhone(CustomerOrders orders[], int& count)
{
	ElectronicServices phone;
	phone.setScreenRepair(150.00);
	phone.setCameraRepair(100.00);
	phone.setBackPanel_Repair(150.00);
	phone.setChargePort_Repair(85.00);
	phone.setHeadphone_Repair(85.00);
	phone.setMotherboardReplace(300.00);
	phone.setBatteryReplace(70.00);

	string serviceOption;

	do
	{

	cout << "\tPhone Repair Services\n"
		<< "PS001 Screen Repair\n"
		<< "PS002 Camera Repair\n"
		<< "PS003 Back Cover Repair\n"
		<< "PS004 Charge Port Repair\n"
		<< "PS005 Headphone Jack Repair\n"
		<< "PS006 Logic Board Repair\n"
		<< "PS007 Battery Replacement\n"
		<< "00000 Exit\n"
		<< "Enter service code to add a service to your order: ";
	cin >> serviceOption;

	
		if (serviceOption == "PS001")
		{
			orders[count].setOrderName("Phone Screen Repair");
			orders[count].setOrderPrice(phone.getScreenRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS002")
		{
			orders[count].setOrderName("Phone Camera Repair");
			orders[count].setOrderPrice(phone.getCameraRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS003")
		{
			orders[count].setOrderName("Phone Glass Repair");
			orders[count].setOrderPrice(phone.getBackPanel_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS004")
		{
			orders[count].setOrderName("Phone Charge Port Repair");
			orders[count].setOrderPrice(phone.getChargePort_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS005")
		{
			orders[count].setOrderName("Phone Audio Jack Repair");
			orders[count].setOrderPrice(phone.getHeadphone_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS006")
		{
			orders[count].setOrderName("Phone Logic Board Repair");
			orders[count].setOrderPrice(phone.getMotherboardReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS007")
		{
			orders[count].setOrderName("Phone Battery Replacement");
			orders[count].setOrderPrice(phone.getBatteryReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else
		{
			if (serviceOption != "00000")
			{
				cout << "Not a valid service code.\n";
			}
		}

	} while (serviceOption != "00000");
}

void optionComp(CustomerOrders orders[], int& count)
{
	ComputerServices comp;
	comp.setScreenRepair(300.00);
	comp.setCameraRepair(100.00);
	comp.setChargePort_Repair(75.00);
	comp.setHeadphone_Repair(75.00);
	comp.setMotherboardReplace(500.00);
	comp.setBatteryReplace(50.00);
	comp.setKeyboardReplace(125.00);
	comp.setLiquidRepair(200.00);
	comp.setFanRepair(75.00);
	comp.setVirusRemoval(100.00);
	comp.setRamUpgrade(75.00);
	comp.setHddUpgrade(150.00);
	comp.setSsdUpgrade(200.00);


	string serviceOption;

	do
	{

	cout << "\tComputer Repair Services\n"
		<< "CS001 Screen Repair\n"
		<< "CS002 Camera Repair\n"
		<< "CS003 Charge Port Repair\n"
		<< "CS004 Headphone Jack Repair\n"
		<< "CS005 Motherboard Replacement\n"
		<< "CS006 Battery Replacement\n"
		<< "CS007 Keyboard Replacement\n"
		<< "CS008 Liquid Damage Repair\n"
		<< "CS009 Fan Replacement\n"
		<< "CS010 Virus Removal\n"
		<< "CS011 RAM Upgrade\n"
		<< "CS012 Hard Drive Replacement\n"
		<< "CS013 Solid-State Drive Replacement\n"
		<< "00000 Exit\n"
		<< "Enter service code to add a service to your order: ";
	cin >> serviceOption;

	
		if (serviceOption == "CS001")
		{
			orders[count].setOrderName("Computer Screen Repair");
			orders[count].setOrderPrice(comp.getScreenRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS002")
		{
			orders[count].setOrderName("Computer Camera Repair");
			orders[count].setOrderPrice(comp.getCameraRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS003")
		{
			orders[count].setOrderName("Computer Charge Port Repair");
			orders[count].setOrderPrice(comp.getChargePort_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS004")
		{
			orders[count].setOrderName("Computer Audio Jack Repair");
			orders[count].setOrderPrice(comp.getHeadphone_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS005")
		{
			orders[count].setOrderName("Computer Motherboard Repair");
			orders[count].setOrderPrice(comp.getMotherboardReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS006")
		{
			orders[count].setOrderName("Computer Battery Replacement");
			orders[count].setOrderPrice(comp.getBatteryReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS007")
		{
		orders[count].setOrderName("Keyboard Replacement");
		orders[count].setOrderPrice(comp.getKeyboardReplace());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else if (serviceOption == "CS008")
		{
		orders[count].setOrderName("Liquid Damage Repair");
		orders[count].setOrderPrice(comp.getLiquidRepair());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else if (serviceOption == "CS009")
		{
		orders[count].setOrderName("Computer Fan Replacement");
		orders[count].setOrderPrice(comp.getFanRepair());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else if (serviceOption == "CS010")
		{
		orders[count].setOrderName("Virus Removal");
		orders[count].setOrderPrice(comp.getVirusRemoval());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else if (serviceOption == "CS011")
		{
		orders[count].setOrderName("RAM Upgrade");
		orders[count].setOrderPrice(comp.getRamUpgrade());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else if (serviceOption == "CS012")
		{
			orders[count].setOrderName("HDD Replacement");
			orders[count].setOrderPrice(comp.getHddUpgrade());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "CS013")
		{
		orders[count].setOrderName("SSD Replacement");
		orders[count].setOrderPrice(comp.getSddUpgrade());
		count++;
		cout << "Service added!\n";
		system("PAUSE");
		}

		else
		{
			if (serviceOption != "00000")
			{
				cout << "Not a valid service code.\n";
			}
		}

	} while (serviceOption != "00000");
}

void optionTablet(CustomerOrders orders[], int& count)
{
	ElectronicServices tablet;
	tablet.setScreenRepair(200.00);
	tablet.setCameraRepair(100.00);
	tablet.setBackPanel_Repair(175.00);
	tablet.setChargePort_Repair(85.00);
	tablet.setHeadphone_Repair(85.00);
	tablet.setMotherboardReplace(300.00);
	tablet.setBatteryReplace(70.00);

	string serviceOption;

	do
	{

	cout << "\tTablet Repair Services\n"
		<< "TS001 Screen Repair\n"
		<< "TS002 Camera Repair\n"
		<< "TS003 Back Cover Repair\n"
		<< "TS004 Charge Port Repair\n"
		<< "TS005 Headphone Jack Repair\n"
		<< "TS006 Motherboard Repair\n"
		<< "TS007 Battery Replacement\n"
		<< "00000 Exit\n"
		<< "Enter service code to add a service to your order: ";
	cin >> serviceOption;

	
		if (serviceOption == "TS001")
		{
			orders[count].setOrderName("Tablet Screen Repair");
			orders[count].setOrderPrice(tablet.getScreenRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS002")
		{
			orders[count].setOrderName("Tablet Camera Repair");
			orders[count].setOrderPrice(tablet.getCameraRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS003")
		{
			orders[count].setOrderName("Tablet Glass Repair");
			orders[count].setOrderPrice(tablet.getBackPanel_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS004")
		{
			orders[count].setOrderName("Tablet Charge Port Repair");
			orders[count].setOrderPrice(tablet.getChargePort_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS005")
		{
			orders[count].setOrderName("Tablet Audio Jack Repair");
			orders[count].setOrderPrice(tablet.getHeadphone_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS006")
		{
			orders[count].setOrderName("Tablet Motherboard Repair");
			orders[count].setOrderPrice(tablet.getMotherboardReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "TS007")
		{
			orders[count].setOrderName("Tablet Battery Replacement");
			orders[count].setOrderPrice(tablet.getBatteryReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else
		{
			if (serviceOption != "00000")
			{
				cout << "Not a valid service code.\n";
			}
		}

	} while (serviceOption != "00000");
}

void optionConsole(CustomerOrders orders[], int& count)
{
	ConsoleServices consolePlay, consoleXbox, consoleSwitch;
	consolePlay.setHdmiReplace(80.00);
	consolePlay.setDiscDrive_Repair(100.00);
	consolePlay.setOverHeating_Repair(50.00);

	consoleXbox.setHdmiReplace(80.00);
	consoleXbox.setDiscDrive_Repair(100.00);
	consoleXbox.setOverHeating_Repair(50.00);

	consoleSwitch.setScreenRepair(125.00);
	consoleSwitch.setChargePort_Repair(90.00);
	consoleSwitch.setHeadphone_Repair(90.00);
	consoleSwitch.setBatteryReplace(80.00);
	consoleSwitch.setFanReplace(50.00);
	consoleSwitch.setCardReader_Repair(130.00);

	string serviceOption;

	do
	{
		cout << "\tConsole Repair Services\n"
			<< "PS101 PlayStation HDMI Replacement\n"
			<< "PS201 PlayStation Disc Drive Repair\n"
			<< "PS301 PlayStation Overheating Repair\n"
			<< "XB001 XBox HDMI Replacement\n"
			<< "XB002 XBox Disc Drive Repair\n"
			<< "XB003 XBox Overheating Repair\n"
			<< "NS001 Nintendo Switch Screen Repair\n"
			<< "NS002 Nintendo Switch Charge Port Repair\n"
			<< "NS003 Nintendo Switch Headphone Jack Repair\n"
			<< "NS004 Nintendo Switch Battery Replacement\n"
			<< "NS005 Nintendo Switch Fan Replacement\n"
			<< "NS006 Nintendo Switch Card Reader Repair\n"
			<< "00000 Exit\n"
			<< "Enter service code to add a service to your order: ";
		cin >> serviceOption;

		if (serviceOption == "PS101")
		{
			orders[count].setOrderName("PS4 HDMI Replacement");
			orders[count].setOrderPrice(consolePlay.getHdmiReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS201")
		{
			orders[count].setOrderName("PS4 Disc Drive Repair");
			orders[count].setOrderPrice(consolePlay.getDiscDrive_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "PS301")
		{
			orders[count].setOrderName("PS4 Overheating Repair");
			orders[count].setOrderPrice(consolePlay.getOverHeating_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "XB001")
		{
			orders[count].setOrderName("XBox HDMI Replacement");
			orders[count].setOrderPrice(consoleXbox.getHdmiReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "XB002")
		{
			orders[count].setOrderName("XBox Drive Repair");
			orders[count].setOrderPrice(consoleXbox.getDiscDrive_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "XB003")
		{
			orders[count].setOrderName("XBox Overheating Repair");
			orders[count].setOrderPrice(consoleXbox.getOverHeating_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS001")
		{
			orders[count].setOrderName("Nintendo Screen Repair");
			orders[count].setOrderPrice(consoleSwitch.getScreenRepair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS002")
		{
			orders[count].setOrderName("Nintendo Charge Port Repair");
			orders[count].setOrderPrice(consoleSwitch.getChargePort_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS003")
		{
			orders[count].setOrderName("Nintendo Audio Jack Repair");
			orders[count].setOrderPrice(consoleSwitch.getHeadphone_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS004")
		{
			orders[count].setOrderName("Nintendo Battery Replacement");
			orders[count].setOrderPrice(consoleSwitch.getBatteryReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS005")
		{
			orders[count].setOrderName("Nintendo Fan Replacement");
			orders[count].setOrderPrice(consoleSwitch.getFanReplace());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else if (serviceOption == "NS006")
		{
			orders[count].setOrderName("Nintendo Card Reader Repair");
			orders[count].setOrderPrice(consoleSwitch.getCardReader_Repair());
			count++;
			cout << "Service added!\n";
			system("PAUSE");
		}

		else
		{
			if (serviceOption != "00000")
			{
				cout << "Not a valid service code.\n";
			}
		}


	
	} while (serviceOption != "00000");
}

void addCombos(CustomerOrders orders[], int& count)
{
	int option;
	do
	{
		char combo_choice;
		cout << "\tCombos Offered\n";
		cout << "1. New Computer Installation\n"
			<< "2. Recovery Pack\n"
			<< "3. Double Diagnostics\n"
			<< "4. Operating System Formatting/Re-Installation\n"
			<< "5. Operating System/Software Troubleshooting\n"
			<< "6. Exit\n"
			<< "Enter an option to see combo description: ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "\tNew Computer Installation\n"
				<< "Description: Installation of Office and anti-virus\n"
				<< "Price: $65.00\n"
				<< "Press 'A' to add combo to your order, 'B' to go back: ";
			cin >> combo_choice;

			while (toupper(combo_choice) != 'A' && toupper(combo_choice) != 'B')
			{
				cout << "Please enter either 'A' or 'B': ";
				cin >> combo_choice;
			}

			if (toupper(combo_choice) == 'A')
			{
				orders[count].setOrderName("New Computer Combo");
				orders[count].setOrderPrice(65.00);
				count++;
			}
			else if (toupper(combo_choice) == 'B')
			{
				continue;
			}
			break;

		/*case 2:
			cout << "\t\n"
				<< "Description: Installation of Office and anti-virus\n"
				<< "Price: $65.00\n"
				<< "Press 'A' to add combo to your order, 'B' to go back: ";
			cin >> combo_choice;

			while (toupper(combo_choice) != 'A' && toupper(combo_choice) != 'B')
			{
				cout << "Please enter either 'A' or 'B': ";
				cin >> combo_choice;
			}

			if (toupper(combo_choice) == 'A')
			{
				orders[count].setOrderName("New Computer Combo");
				orders[count].setOrderPrice(65.00);
				count++;
			}
			else if (toupper(combo_choice) == 'B')
			{
				continue;
			}
			break;*/

		}
	} while (option != 6);
}

void manageServices(CustomerOrders orders[], int& count)
{
	int remove;
	cout << "Here are your current orders:\n";
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ". " << orders[i].getOrderName() << "/" << orders[i].getOrderPrice() << endl;
	}

	cout << "Enter order you wish to remove: ";
	cin >> remove;

	for (int i = 0; i < count; i++)
	{
		if (i == remove - 1)
		{
			for (int j = i; j < (count - 1); j++)
			{
				orders[j] = orders[j + 1];
			}
			count--;
			break;
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ". " << orders[i].getOrderName() << "/" << orders[i].getOrderPrice() << endl;
	}

	system("PAUSE");
	
}

void print_export(CustomerOrders orders[], int count)
{
	ofstream out_var;
	//string fileName;

	out_var.open("demoFile.csv");

	out_var << "Name,Price" << "\n";

	for (int i = 0; i < count; i++)
	{
		out_var << orders[i].getOrderName() << "," << orders[i].getOrderPrice() << "\n";
	}


}

void newOrder()
{
	////CustomerOrders newOrder[MAX_SIZE];
	//orders = new CustomerOrders[MAX_SIZE];
	//count = 0;

	CustomerOrders orders[MAX_SIZE];
	Receipt receiptObj;
	int option, count = 0;

	startingMessage(receiptObj);

	do
	{
		displayMenu();
		cin >> option;
		system("CLS");

		switch (option)
		{
		case 1:
			enterServices(orders, count);
			break;
		case 2:
			addCombos(orders, count);
			break;
		case 3:
			manageServices(orders, count);
			break;
		case 5:
			newOrder();
			break;
		case 6:
			print_export(orders, count);
			break;
		case 8:
			exit(0);
		}
	} while (option != 8);
}



