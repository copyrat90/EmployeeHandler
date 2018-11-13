#ifndef EMPLOYEE_HANDLER_H
#define EMPLOYEE_HANDLER_H

#include "common.h"
#include "employee.h"
#define LIST_MAX 50

class EmployeeHandler
{
private:
	Employee* empList[LIST_MAX];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee * emp)
	{
		if (empNum >= LIST_MAX)
		{
			cout << "Employee list is full" << endl;
			return;
		}
		
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		
		cout << "급여합계 : " << sum << endl; 
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};


#endif // EMPLOYEE_HANDLER_H
