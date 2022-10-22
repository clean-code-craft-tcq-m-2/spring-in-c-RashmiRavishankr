#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
int maximun, minimum, sum;
    float avg;
    maximum= numberset[0];
    minimum= numberset[0]
for(int i=0 ; i< setlength ;i++)
{
if(numberset[i]<minimun)
   {
    s.min= numberset[i];
   }
if(numberset[i]> maximum
   {
       s.max = numberset[i];
   }
   sum=sum  +  numberset[i];
   }
   avg=(float)sum/ setlength;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
 
int main()
{

    
