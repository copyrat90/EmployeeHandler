#ifndef PERMANENT_WORKER_H
#define PERMANENT_WORKER_H

#include "common.h"
#include "employee.h"

class PermanentWorker : public Employee
{
private:
	int salary;
public:	
	PermanentWorker(const char * name, int money)
		: Employee(name), salary(money)
	{}
	
	virtual int GetPay() const
	{
		return salary;
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "ºÀ±Þ : " << GetPay() << endl; 
	}
};


#endif // PERMANENT_WORKER_H
