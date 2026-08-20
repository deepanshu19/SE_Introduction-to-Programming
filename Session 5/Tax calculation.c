#include<stdio.h>

//to calculate tax amount
float calcTax(float salary)
{
    float taxAmnt;

    if(salary<=300000){
        taxAmnt = (salary * 0)/100;
    }
    else if(salary>300000 && salary<=500000){
        taxAmnt = (salary * 3)/100;
    }
    else if(salary>500000 && salary<=700000){
        taxAmnt = (salary * 5)/100;
    }

    return taxAmnt;

}


int main(){

float salary,annualSalary,netSalary,taxAmnt;

printf("Please enter Salary:");
scanf("%f",&salary);

taxAmnt = calcTax(salary);
annualSalary = salary + taxAmnt;
netSalary = salary - taxAmnt;

printf("Tax Amount is:%.2f\n",taxAmnt);
printf("Annual Salary is:%.2f\n",annualSalary);
printf("Net Salary is:%.2f\n",netSalary);

return 0;
}


