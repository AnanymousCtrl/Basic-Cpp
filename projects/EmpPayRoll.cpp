//09sep2023
#include <stdio.h>
#include <stdlib.h>
struct Emp{
	char name[50]; //name length
	float hwage; //hourly wages
	int hwork; //hours worked
	int absent_days; //number of days absent
};

float Salary(float hwage, int hwork){
	return hwage * hwork;
}

float MonSalary(struct Emp emp) {
    float daily_salary = emp.hwage * emp.hwork;
    float deduction_per_day = (5/100)*daily_salary;
    float monthly_salary = daily_salary * (22 - emp.absent_days) - (deduction_per_day * emp.absent_days);
    return monthly_salary;
}

int main(){
	struct Emp employee[20];
	int numEmp = 0;
	
	while(1){
		printf("\n Employee Payroll System Menu\n");
		printf("    1. Add Employee\n");
		printf("    2. View Employee Details\n");
		printf("    3. Calculate Daily Salary\n");
		printf("    4. Monthly Salary\n");
		printf("    5. Exit\n");
		printf("\nEnter your Choice: ");
		
		int choice;
		scanf("%d", &choice);
		
		switch (choice){
			case 1: {
				if (numEmp<20){
					struct Emp newEmp;
					printf("\n      Enter employee Name:");
					scanf("%s", newEmp.name);
					printf("      Enter Hourly Wages:");
					scanf("%f", &newEmp.hwage);
					printf("      Enter No. of Working Hours:");
					scanf("%d", &newEmp.hwork);
					printf("No. of official working days is 22!!\n");
					printf("      Enter No. of Absent Days:");
                    scanf("%d", &newEmp.absent_days);
					employee[numEmp] = newEmp;
					numEmp++;
					printf("\n     The Employee was Added successfully!.\n");
				}
				else{
					printf("Entry Limit reached. More Employees can not be added!!");
				}
				break;
			}
//			case 2: {
//				int i;
//				printf("\n      Employee Details\n");
//				for(i=0; i<numEmp; i++){
//					printf("\n       Employee ID: %d\n",i+1);
//					printf("       Name: %s\n", employee[i].name);
//					printf("       Hourly Wage: %.2f\n", employee[i].hwage);
//					printf("       Hours Worked: %d\n", employee[i].hwork);
//				}
//				break;
//			}
			case 2: {
                printf("\n     Employee Details:\n");
                printf("     %-5s %-20s %-10s %-15s\n", "ID", "Name", "Wage", "Hours Worked");
                for (int i = 0; i < numEmp; i++) {
                    printf("     %-5d %-20s Rs. %-10.2f %-15d\n", i + 1, employee[i].name, employee[i].hwage, employee[i].hwork);
                }
                break;
            }
			case 3: {
				int ID;
				printf("\n      !Salary Calculator!\n");
				printf("       Enter Employee ID to calculate Daily Salary: ");
				scanf("%d", &ID);
				if (ID>=1 && ID<=numEmp){
					float salary = Salary(employee[ID-1].hwage,employee[ID-1].hwork);
					printf("       Salary of %s is %.2f\n", employee[ID-1].name,salary);
				}
				else{
					printf("Invalid Employee Number!!\n");
					printf("Try again!!");
				}
				break;
			}
			case 4: {
				int ID;
				printf("\n      !Monthly Salary Calculator!\n");
				printf("       Enter Employee ID to calculate Monthly Salary: ");
				scanf("%d", &ID);
				if(ID>=1 && ID<=numEmp){
					float salary = MonSalary(employee[ID-1]);
					printf("Monthaly salary of %d is: %.2f",ID, salary);
				}	
				else{
					printf("Invalid Employee Number!!\n");
					printf("Try again!!");
				}
				break;
				
			case 5: {
				exit(0);
				break;
			}
			}
			default:{
				printf("Invalid Choice. Try Again!!\n");
				break;
			}
		}
	}
	return 0;
}
