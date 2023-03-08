
#include <stdio.h>

float cal_salary(float basic){
  float DA, HRA, Total;
  if(basic >= 1500){
    HRA = 500;
    DA = basic * 0.98;
    Total = basic + HRA + DA;
  }else{
    HRA = basic * 0.1;
    DA = basic * 0.9;
    Total = basic + HRA + DA;
  }

  return Total;
}

int main(){
  float basic;
  printf("Enter your Basic Salary: ");
  scanf("%f", &basic);
  printf("Your total salary is %.2f", cal_salary(basic));
}