//WAP to find diameter, circumference and area of a circle using functions

#include <stdio.h>

#define PI 3.14159265359

float calArea(float r){
  float area;

  area = PI * r * r;

  return area;
}

float calCircum(float r){
  float circumference;

  circumference = 2 * PI * r;

  return circumference;
}

float calDiameter(float r){
  float diameter;

  diameter = 2 * r;

  return diameter;
}

void main(){
  float rad;
  printf("Enter radius of Circle: ");
  scanf("%f", &rad);

  printf("\nArea: %.2f", calArea(rad));
  printf("\nCircumference: %.2f", calCircum(rad));
  printf("\nDiameter: %.2f", calDiameter(rad));
}