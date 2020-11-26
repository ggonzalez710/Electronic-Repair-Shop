#include "ConsoleServices.h"

ConsoleServices::ConsoleServices()
{
	hdmi_replace = 0.0;
	discDrive_repair = 0.0;
	overheating_repair = 0.0;
	fan_replace = 0.0;
	cardReader_repair = 0.0;
}
ConsoleServices::~ConsoleServices() {}

void ConsoleServices::setHdmiReplace(double hdmi)
{
	hdmi_replace = hdmi;
}
void ConsoleServices::setDiscDrive_Repair(double discDrive)
{
	discDrive_repair = discDrive;
}
void ConsoleServices::setOverHeating_Repair(double overheating)
{
	overheating_repair = overheating;
}
void ConsoleServices::setFanReplace(double fan)
{
	fan_replace = fan;
}
void ConsoleServices::setCardReader_Repair(double cardReader)
{
	cardReader_repair = cardReader;
}


double ConsoleServices::getHdmiReplace() const
{
	return hdmi_replace;
}
double ConsoleServices::getDiscDrive_Repair() const
{
	return discDrive_repair;
}
double ConsoleServices::getOverHeating_Repair() const
{
	return overheating_repair;
}
double ConsoleServices::getFanReplace() const
{
	return fan_replace;
}
double ConsoleServices::getCardReader_Repair() const
{
	return cardReader_repair;
}
