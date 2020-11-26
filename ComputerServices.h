#pragma once
#include "ElectronicServices.h"
class ComputerServices : public ElectronicServices
{
private:
	double virusRemoval;
	double ramUpgrade;
	double hddUpgrade;
	double ssdUpgrade;
	double keyboardReplace;
	double liquidRepair;
	double fanRepair;

public:
	ComputerServices();
	~ComputerServices();

	void setVirusRemoval(double virus_rem);
	void setRamUpgrade(double ram_up);
	void setHddUpgrade(double hdd_up);
	void setSsdUpgrade(double ssd_up);
	void setKeyboardReplace(double keyboard_rep);
	void setLiquidRepair(double liquid_rep);
	void setFanRepair(double fan_rep);

	double getVirusRemoval() const;
	double getRamUpgrade() const;
	double getHddUpgrade() const;
	double getSddUpgrade() const;
	double getKeyboardReplace() const;
	double getLiquidRepair() const;
	double getFanRepair() const;
};

