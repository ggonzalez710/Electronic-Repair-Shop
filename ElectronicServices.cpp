#include "ElectronicServices.h"

ElectronicServices::ElectronicServices()
{
	screenRepair = 0.0;
	cameraRepair = 0.0;
	backPanel_Repair = 0.0;
	motherboard_Replace = 0.0;
	batteryReplace = 0.0;
	chargePort_Repair = 0.0;
	headphone_JackRepair = 0.0;
}
ElectronicServices::~ElectronicServices() {}

void ElectronicServices::setScreenRepair(double screen_rep)
{
	screenRepair = screen_rep;
}
void ElectronicServices::setCameraRepair(double camera_rep)
{
	cameraRepair = camera_rep;
}
void ElectronicServices::setBackPanel_Repair(double backP_rep)
{
	backPanel_Repair = backP_rep;
}
void ElectronicServices::setMotherboardReplace(double motherboard)
{
	motherboard_Replace = motherboard;
}
void ElectronicServices::setBatteryReplace(double battery_rep)
{
	batteryReplace = battery_rep;
}
void ElectronicServices::setChargePort_Repair(double chargePort)
{
	chargePort_Repair = chargePort;
}
void ElectronicServices::setHeadphone_Repair(double headphone_rep)
{
	headphone_JackRepair = headphone_rep;
}


double ElectronicServices::getScreenRepair() const
{
	return screenRepair;
}
double ElectronicServices::getCameraRepair() const
{
	return cameraRepair;
}
double ElectronicServices::getBackPanel_Repair() const
{
	return backPanel_Repair;
}
double ElectronicServices::getMotherboardReplace() const
{
	return motherboard_Replace;
}
double ElectronicServices::getBatteryReplace() const
{
	return batteryReplace;
}
double ElectronicServices::getChargePort_Repair() const
{
	return chargePort_Repair;
}
double ElectronicServices::getHeadphone_Repair() const
{
	return headphone_JackRepair;
}


