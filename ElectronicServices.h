#pragma once
class ElectronicServices
{
private:
	double screenRepair;
	double cameraRepair;
	double backPanel_Repair;
	double motherboard_Replace;
	double batteryReplace;
	double chargePort_Repair;
	double headphone_JackRepair;

public:
	ElectronicServices();
	~ElectronicServices();

	void setScreenRepair(double screen_rep);
	void setCameraRepair(double camera_rep);
	void setBackPanel_Repair(double backP_rep);
	void setMotherboardReplace(double motherboard);
	void setBatteryReplace(double battery_rep);
	void setChargePort_Repair(double chargePort);
	void setHeadphone_Repair(double headphone_rep);

	double getScreenRepair() const;
	double getCameraRepair() const;
	double getBackPanel_Repair() const;
	double getMotherboardReplace() const;
	double getBatteryReplace() const;
	double getChargePort_Repair() const;
	double getHeadphone_Repair() const;


};

