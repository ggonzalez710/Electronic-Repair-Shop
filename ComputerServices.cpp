#include "ComputerServices.h"

ComputerServices::ComputerServices()
{
	virusRemoval = 0.0;
	ramUpgrade = 0.0;
	hddUpgrade = 0.0;
	ssdUpgrade = 0.0;
	keyboardReplace = 0.0;
	liquidRepair = 0.0;
	fanRepair = 0.0;
}
ComputerServices::~ComputerServices() {}

void ComputerServices::setVirusRemoval(double virus_rem)
{
	virusRemoval = virus_rem;
}
void ComputerServices::setRamUpgrade(double ram_up)
{
	ramUpgrade = ram_up;
}
void ComputerServices::setHddUpgrade(double hdd_up)
{
	hddUpgrade = hdd_up;
}
void ComputerServices::setSsdUpgrade(double ssd_up)
{
	ssdUpgrade = ssd_up;
}
void ComputerServices::setKeyboardReplace(double keyboard_rep)
{
	keyboardReplace = keyboard_rep;
}
void ComputerServices::setLiquidRepair(double liquid_rep)
{
	liquidRepair = liquid_rep;
}
void ComputerServices::setFanRepair(double fan_rep)
{
	fanRepair = fan_rep;
}


double ComputerServices::getVirusRemoval() const
{
	return virusRemoval;
}
double ComputerServices::getRamUpgrade() const
{
	return ramUpgrade;
}
double ComputerServices::getHddUpgrade() const
{
	return hddUpgrade;
}
double ComputerServices::getSddUpgrade() const
{
	return ssdUpgrade;
}
double ComputerServices::getKeyboardReplace() const
{
	return keyboardReplace;
}
double ComputerServices::getLiquidRepair() const
{
	return liquidRepair;
}
double ComputerServices::getFanRepair() const
{
	return fanRepair;
}
