#include "mytools.h"
#include <assert.h>
#include <math.h>

int main() 
{
  //Constants
 const int NUM_OF_POINTS=9000000;
 const double ACTUAL_VALUE = atan(1) * 4;
 
 //Variables
 int i;
 double x=0;
 double y=0;
 float inside=0;
 float outside=0;
 double distance=0;
 float estimatedValue=0;
 float deviation = 0;
 float percentError=0;
 float value = 0;
 
 //Call mytools
 assert(init_mytool()==0);
 
 //Loop
 for(i = 0; i < NUM_OF_POINTS; i++)
 {
   x=get_random_number();
   y=get_random_number();
   
   distance = (x * x + y * y);
   double sqrt(double distance);
   
   if(distance <= 1)
   {
     inside ++;
   }
   outside ++;
  }
  
  //End of mytools
  finalize_mytool();
  
  //Display values
  estimatedValue =  4 * (inside / NUM_OF_POINTS);
  deviation = ACTUAL_VALUE - estimatedValue; 
  percentError = ((deviation / ACTUAL_VALUE) * 100);
  printf("Estimated value of pi: %.2f\n", estimatedValue);
  printf("Deviation: %.2f\n", deviation);
  printf("Percent Error: %.2f%\n", percentError); 
return 0;
}