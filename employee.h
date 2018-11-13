#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "common.h"

class Employee
{
private:
	char name[100];
public:
	Employee(const char * name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "ÀÌ¸§ : " << name << endl; 
	}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

#endif // EMPLOYEE_H
