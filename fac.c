/*It calculates longer factorials(until 165 digits)*/
#include<stdio.h>                                
#include <stdlib.h>
#include <string.h>
void factorial(int );
int main() {
       
    float n;                                                        /*it is taken as float to prevent factorial from getting float values*/
       printf("Enter N:");
       scanf("%f",&n);
       printf("\n");
       if(n>165 || (n-(int)n!=0)){                                   /*here the warning is seen that enables float values and big values(bigger than 165)*/
       	printf("It is not allowed to calculate!");
	   }
	   else if(n>=2) {
	   factorial((int)n-2);
	   factorial((int)n-1);
       factorial((int)n);
       }
       else if(n==1){
       printf("0!=1\n1!=1\n");
	   }
       else{
       	printf("it is not good value to compute");
	   }
    return 0;
}

void factorial(int n){                                  /*factorial function*/
    int a[300]; 
    char b[300];
    int i,j,rest,dcount,hold;

       a[0]=1;                                                /*a[0] initialized 1 because it will be used in factorial to multiplication*/
       dcount=1;                                              /*it will be used to move digit to digit*/ 
       rest=0;                                              /*it is carry value and initialized to 0*/
       
	   
	   for(i=1;i<=n;i++){
			for(j=0;j<dcount;j++){
               hold = a[j]*i+rest; 
               a[j]=hold%10;                                                            /*here the digit multiplication and carry value are stored in variables and array */
               rest = hold/10;                                                           
            }
             for(;rest>0;rest/=10){ 
               a[dcount]=rest%10;                                      /*carry value stored in array associated with digit counter and each time digit counter incremented*/
               dcount++; 
             }
      }       
              printf("%d!=",n);
              for(i=dcount-1;i>=0;i--) {                      /*that prints the result by reversing the array because the values stored in array in opposite order*/
              sprintf(b,"%d",a[i]);
              printf("%s",b);
              if(i%3==0 && i!=0){                        /*commas are put in order to make prettified output*/
              	printf(",");
			  }
              }
              printf("\n");
              printf("\n");
}

