/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  int values1[3], values2[3],sum[3];
  // taking input and storing it in an array
  for(int i = 0; i < 3; i++) {
     scanf("%d", &values1[i]);
	 scanf("%d", &values2[i]);
  }

  for(int i = 0; i < 3; i++) {
	  sum[i]=values1[i]+values2[i];
     printf("%d\n",sum[i]);
  }
  return 0;
}
