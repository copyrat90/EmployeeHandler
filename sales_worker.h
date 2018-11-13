#ifndef SALES_WORKER_H
#define SALES_WORKER_H

#include "common.h"
#include "permanent_worker.h"

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char * name, int defaultSalary, double ratio)
		: PermanentWorker(name, defaultSalary), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	virtual int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)salesResult * bonusRatio;
	}
	virtual void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "ºÀ±Þ : " << GetPay() << endl;
	}
};


#endif // SALES_WORKER_H
