#pragma once
#include "ElectronicServices.h"
class ConsoleServices : public ElectronicServices
{
private:
	double hdmi_replace;
	double discDrive_repair;
	double overheating_repair;
	double fan_replace;
	double cardReader_repair;

public:
	ConsoleServices();
	~ConsoleServices();

	void setHdmiReplace(double hdmi);
	void setDiscDrive_Repair(double discDrive);
	void setOverHeating_Repair(double overheating);
	void setFanReplace(double fan);
	void setCardReader_Repair(double cardReader);

	double getHdmiReplace() const;
	double getDiscDrive_Repair() const;
	double getOverHeating_Repair() const;
	double getFanReplace() const;
	double getCardReader_Repair() const;
};

