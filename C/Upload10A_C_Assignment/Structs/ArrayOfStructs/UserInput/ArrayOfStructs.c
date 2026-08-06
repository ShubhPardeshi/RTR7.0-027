#include<stdio.h>
#include<ctype.h>

#define NUM_EMPLOYEE 5
#define MAX_NAME 100

typedef struct StructEmployee
{
  char name[MAX_NAME];
  int age; 
  float salary; 
  char sex;
  char Marital_status;
}Employee; 

int main(void)
{

  void MyGetString(char[], int);

  Employee EmployeeRecords[NUM_EMPLOYEE];
  int i;

  char employee_A[] = "AAAA";
  char employee_B[] = "BBBB";
  char employee_C[] = "CCCCCC";
  char employee_D[] = "SSSSS";
  char employee_E[] = "DDDDD";

  for(i = 0; i < NUM_EMPLOYEE; i++ )
  {
    printf("\n\n");
    printf("Data entry for employee number %d: \n\n", (i+1));

    printf("\n\n");
    printf("Enter employee name:\n");
    MyGetString(EmployeeRecords[i].name, MAX_NAME); 

    printf("\n\n");
    printf("Enter employee age:\n");
    scanf("%d", &EmployeeRecords[i].age); 

    printf("\n\n");
    printf("Enter employee sex:\n");
    EmployeeRecords[i].sex = getch(); 
    printf("%c", EmployeeRecords[i].sex);
    EmployeeRecords[i].sex = toupper(EmployeeRecords[i].sex);

    printf("\n\n");
    printf("Enter employee salary in Indian rupees:\n");
    scanf("%f", &EmployeeRecords[i].salary); 

    printf("\n\n");
    printf("Is employee married? (Enter y/Y for Yes and n/N for No):\n");
    EmployeeRecords[i].Marital_status = getch(); 
    printf("%c", EmployeeRecords[i].Marital_status);
    EmployeeRecords[i].Marital_status = toupper(EmployeeRecords[i].Marital_status);
  }

  printf("\n\n");
  printf("Displaying employee records: \n\n");
  for(i = 0; i < NUM_EMPLOYEE; i++)
  {
    printf("Employee number %d: \n", (i+1));
    printf("Name: %s\n", EmployeeRecords[i].name);
    printf("Age: %d years\n", EmployeeRecords[i].age);
    printf("Salary: %f\n", EmployeeRecords[i].salary);

    if(EmployeeRecords[i].sex == 'M')
        printf("Sex: Male\n");
    else if (EmployeeRecords[i].sex == 'F') 
        printf("Sex: Female\n");
    else 
        printf("Sex: Invalid data entered.\n");


    if(EmployeeRecords[i].Marital_status == 'Y')
        printf("Marital status: Married\n");
    else if(EmployeeRecords[i].Marital_status == 'N') 
        printf("Marital status: Unmarried\n");
    else 
        printf("Marital status: Invalid data entered.\n");
    printf("\n\n");
  }

  return(0);
}

void MyGetString(char str[], int str_size)
{
  int i; 
  char ch = '\0';

  i=0;
  do 
  {
    ch = getch(); 
    str[i] = ch; 
    printf("%c", str[i]);
    i++;
  }while((ch != '\r') && (i < str_size));

  if(i == str_size)
    str[i-1] = '\0';
  else 
    str[i] = '\0';

}