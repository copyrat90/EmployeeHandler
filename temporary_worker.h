#ifndef TEMPORARY_WORKER_H
#define TEMPORARY_WORKER_H

#include "common.h"
#include "employee.h"

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char * name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{}
	
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	virtual int GetPay() const
	{
		return workTime * payPerHour;
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "ºÀ±Þ : " << GetPay() << endl; 
	}
};


#endif // TEMPORARY_WORKER_H
