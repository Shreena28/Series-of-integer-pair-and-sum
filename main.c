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
