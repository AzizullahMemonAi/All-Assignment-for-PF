#include<stdio.h>
#include<conio.h>

int main(){
	
	float Basic_salary,Dearness_allowance,Rent_allowance,Gross_salary;
	
	printf("Enter the Basic salary");
	scanf("%f",&Basic_salary);
	
	Dearness_allowance = 0.4*Basic_salary;
	Rent_allowance = 0.2*Basic_salary;
	
	Gross_salary = Basic_salary+ Dearness_allowance +Rent_allowance;
	
	printf("The Ramesh`s Gross salary is %f",Gross_salary);
	
	getch();
	}	
		

		
	

