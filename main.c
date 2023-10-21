#include <stdio.h>




int printTemps()
{
    /*Printing temperatures
    */
   //Looks like we can declare stuff in single lines
   int fahr, celsius;
   int lower,upper,step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   while (fahr <= upper){
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n",fahr,celsius);
    fahr = fahr + step;
   }
   



}

//notes:

int main()
{
    printf("hello world\n");
    printTemps();
    return 0;
}
