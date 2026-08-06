#include<stdio.h>

#define MAX_NAME 100
#define MARITAL_STATUS 15

typedef struct StructEmployee
{
  char name[MAX_NAME];
  int age; 
  float salary; 
  char sex;
  char Marital_status[MARITAL_STATUS];
}Employee; 

int main(void)
{
  Employee EmployeeRecords[5];
  int i;

  char employee_A[] = "AAAA";
  char employee_B[] = "BBBB";
  char employee_C[] = "CCCCCC";
  char employee_D[] = "SSSSS";
  char employee_E[] = "DDDDD";

  //Emp 1
  strcpy(EmployeeRecords[0].name, employee_A); 
  EmployeeRecords[0].age = 34;
  EmployeeRecords[0].salary = 50000.0f;
  EmployeeRecords[0].sex = 'M';
  strcpy(EmployeeRecords[0].Marital_status, "Married"); 

  //Emp 2
  strcpy(EmployeeRecords[1].name, employee_B); 
  EmployeeRecords[1].age = 24;
  EmployeeRecords[1].salary = 30000.0f;
  EmployeeRecords[1].sex = 'F';
  strcpy(EmployeeRecords[1].Marital_status, "Unmarried"); 

  //Emp 3
  strcpy(EmployeeRecords[2].name, employee_C); 
  EmployeeRecords[2].age = 21;
  EmployeeRecords[2].salary = 25000.0f;
  EmployeeRecords[2].sex = 'M';
  strcpy(EmployeeRecords[2].Marital_status, "Unmarried");

  //Emp 4
  strcpy(EmployeeRecords[3].name, employee_D); 
  EmployeeRecords[3].age = 50;
  EmployeeRecords[3].salary = 1000000.0f;
  EmployeeRecords[3].sex = 'M';
  strcpy(EmployeeRecords[3].Marital_status, "Married");

  //Emp 5
  strcpy(EmployeeRecords[4].name, employee_E); 
  EmployeeRecords[4].age = 43;
  EmployeeRecords[4].salary = 700000.0f;
  EmployeeRecords[4].sex = 'M';
  strcpy(EmployeeRecords[4].Marital_status, "Unmarried");

  printf("\n\n");
  printf("Displaying employee records: \n\n");
  for(i = 0; i < 5; i++)
  {
    printf("Employee number %d: \n", (i+1));
    printf("Name: %s\n", EmployeeRecords[i].name);
    printf("Age: %d\n", EmployeeRecords[i].age);
    printf("Salary: %f\n", EmployeeRecords[i].salary);

    if(EmployeeRecords[i].sex == 'M' || EmployeeRecords[i].sex == 'm' )
        printf("Sex: Male\n");
    else
        printf("Sex: Female\n");

    printf("Marital Status: %s\n", EmployeeRecords[i].Marital_status);
    printf("\n\n");
  }

  return(0);
}