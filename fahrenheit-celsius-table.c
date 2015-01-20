#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ...,300 */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;  /*lower limit of temperature table */
  upper = 300;  /* upper limit*/
  step = 20;  /* step size*/

  fahr = lower;
  printf("***********************\n");
  printf("**FAHRENHEIT**CELSIUS**\n");
  printf("***********************\n");

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%8.0f %10.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  lower = 0;  /*lower limit of temperature table */
  upper = 100;  /* upper limit*/
  step = 5;  /* step size*/

  celsius = lower;

  printf("***********************\n");
  printf("**CELSIUS**FAHRENHEIT**\n");
  printf("***********************\n");

  while (celsius <= upper) {
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%8.0f %10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

}
