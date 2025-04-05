#include <stdio.h>

void c_to_f(float c);
void f_to_c(float f);

int main(int argc, char *argv[])
{
  float temperature;
  int choice;

  printf("Temperature converter\n");
  printf(" 1) Celcius to Fareinheit\n");
  printf(" 2) Fareinheit to Celcius\n");
  printf("Pick option 1 or 2\n");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Enter temperature in Celcius:");
    scanf("%f", &temperature);
    c_to_f(temperature);
    break;
  case 2:
    printf("Enter temperature in Fareinheit: ");
    scanf("%f", &temperature);
    f_to_c(temperature);
    break;
  default:
    printf("Unavailable.");
  }
  return 0;
}

void c_to_f(float c){
  float f = (c * 9 / 5) + 32;
  printf("%.2f celcius = %.2f fareinheit", c, f);
}
void f_to_c(float f){
  float c = (f - 32) * 9 / 5;
  printf("%.2f fareinheit = %.2f celcius", c, f);
}



