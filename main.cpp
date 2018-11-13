#include "common.h"

#include "employee_handler.h"
#include "permanent_worker.h"
#include "sales_worker.h"
#include "temporary_worker.h"


int main(void)
{
	EmployeeHandler handler;
	PermanentWorker * pw = new PermanentWorker("나정규", 50000);
	SalesWorker * sw = new SalesWorker("나영업", 30000, 0.01);
	TemporaryWorker * tw = new TemporaryWorker("나임시", 10000);
	
	handler.AddEmployee(pw);
	handler.AddEmployee(sw);
	handler.AddEmployee(tw);
	
	sw->AddSalesResult(200000);
	tw->AddWorkTime(3);
	
	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();
	
	return 0;
}
