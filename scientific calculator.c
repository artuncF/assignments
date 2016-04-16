#include<stdlib.h>
#include <string.h>
#include "myheader.h"
double memoir,rbuffer;

void main() {
	char input[10];
	char input1[10];
	int i;
	printf("-------------------------------------------------------------------------------\nThe list of operations in this simple calculator:\nsine (S), cosine (N), tangent (T), exponent (E)\npower (W), absolute (A), factorial (F)\nadd (+), subtract (-), divide(/), multiply(*), modulus(%%)\n pi (P)\nQuit (Q)\nMemory (M)\nClear (C)\nMemory Clear (MC)\nMemory Return (MR)\n----------------------------------------------------------------------------\n\n ");
	 
	while(strcmp(input,"Q")){
	   
	   printf("enter user input:");
	   scanf("%s",input);
       if(atof(input) || strcmp(input,"0")==0){
	    if(atof(input)<5000000 && atof(input)>-5000000){
       	memoir=atof(input);
       	printf("enter user input:");
	    scanf("%s",input1);
	      if(atof(input1)<5000000 && atof(input1)>-5000000){
	         if(((strcmp(input1,"S"))==0) || ((strcmp(input1,"N"))==0) || ((strcmp(input1,"T"))==0) || ((strcmp(input1,"F"))==0) || ((strcmp(input1,"A"))==0) || ((strcmp(input1,"M"))==0) || ((strcmp(input1,"MR"))==0) || ((strcmp(input1,"MC"))==0) || ((strcmp(input1,"C"))==0)){
	            if(((strcmp(input1,"S"))==0)){
	            	memoir=sine((int)atof(input));
	            	printf("sin(%d)=%.2f\n",(int)atof(input),sine((int)atof(input)));
				}
				else if(((strcmp(input1,"N"))==0)){
					memoir=cose((int)atof(input));
					printf("cos(%d)=%.2f\n",(int)atof(input),cose((int)atof(input)));    
				}
				else if(((strcmp(input1,"T"))==0)){
					i=cose((int)memoir);
					if(i){
					    memoir=tange((int)atof(input));
					    printf("tan(%d)=%.2f\n",(int)atof(input),tange((int)atof(input)));	
					}
					else {
						printf("Overflow!\n");
			        }
				}
				else if(((strcmp(input1,"F"))==0)){
					if(atof(input)<0){
						printf("Negative numbers' factorial can not be calculated!\n");
					}
					else {
					memoir=factorial((long int)atof(input));
					printf("%lld!=%lld\n",(long int)atof(input),factorial((long int)atof(input)));
				    }
				}
				else if(((strcmp(input1,"A"))==0)){
					memoir=absolute(atof(input));
					printf("%lf\n",atof(input),absolute(atof(input)));
				}
				else if(((strcmp(input1,"M"))==0)){
					rbuffer=memoir;
				}
				else if(((strcmp(input1,"MR"))==0)){
					printf("%f\n",memoir);
				}
				else if(((strcmp(input1,"MC"))==0)){
					memoir=0;
				}
				else if(((strcmp(input1,"C"))==0)){
					rbuffer=0;
					printf("%f\n",rbuffer);
				}
	      }
	         else if(((strcmp(input1,"+"))==0) || ((strcmp(input1,"-"))==0) || ((strcmp(input1,"/")) == 0) || ((strcmp(input1,"*")) == 0) || ((strcmp(input1,"%")) == 0) || ((strcmp(input1,"W")) == 0)){
		        printf("enter user input:");
	            scanf("%s",input);
	            if(atof(input)){
	              if(atof(input)<500000000 && atof(input)>-500000000){
	               if(((strcmp(input1,"+"))==0)){
	            	printf("%f\n",memoir+atof(input));
	            	memoir=memoir+atof(input);
				   }
				   else if(((strcmp(input1,"-"))==0)) {
				   	printf("%f\n",memoir-atof(input));
				   	memoir=memoir-atof(input);
				   }
	               else if(((strcmp(input1,"/")) == 0)) {
	               	printf("%f\n",memoir/atof(input));
	               	memoir=memoir/atof(input);
				   }
				   else if(((strcmp(input1,"*")) == 0)) {
				   	printf("%f\n",memoir*atof(input));
				   	memoir=memoir*atof(input);
			 	   }
				   else if(((strcmp(input1,"%")) == 0) ) {
				   	printf("%i\n",(int)memoir%(int)atof(input));
				   	memoir=(int)memoir%(int)atof(input);
				   }
	               else if( ((strcmp(input1,"W")) == 0)) {
	               	printf("%f\n",power(memoir,(int)atof(input)));
	               	memoir=power(memoir,(int)atof(input));
				   }
			    }
			    else {
			    	printf("Entry is not appropriate to calculate, please enter again\n");
				}
			 }
				else {
					if(((strcmp(input1,"Q"))==0)){
						break;
					}
				    else {
					printf("Invalid character. Choose from the operators below:\n----------------------------------------------------------\nsine (S), cosine (N), tangent (T), exponent (E)\npower (W), absolute (A), factorial (F)\nadd (+), subtract (-), divide(/), multiply(*), modulus (%%)\npi (P)\n Quit (Q)\n Memory (M)\n Clear (C)\n Memory Clear (MC)\nMemory Return (MR)\n----------------------------------------------------------\n");          
				}
				}
	      }
	    }
	    else{
	    	printf("Entry is not appropriate to calculate, please enter again\n");
		}
      }
      else {
      	printf("Entry is not appropriate to calculate, please enter again\n");
	  }
    }

       else{
	      if(((strcmp(input,"S"))==0) || ((strcmp(input,"P"))==0) || ((strcmp(input,"N"))==0) || ((strcmp(input,"T"))==0) || ((strcmp(input,"F"))==0) || ((strcmp(input,"A"))==0) || ((strcmp(input,"M"))==0) || ((strcmp(input,"MR"))==0) || ((strcmp(input,"MC"))==0) || ((strcmp(input,"C"))==0)){
	            
				if(((strcmp(input,"S"))==0)){
	            	printf("sin(%d)=%.2f\n",(int)memoir,sine((int)memoir));
	            	memoir=sine((int)memoir);
				}
				else if(((strcmp(input,"P"))==0)){
					printf("%.6f\n",PI);
					memoir=PI;
				}
				else if(((strcmp(input,"N"))==0)){
					printf("cos(%d)=%.2f\n",(int)memoir,cose((int)memoir));
					memoir=cose((int)memoir);    
				}
				else if(((strcmp(input,"T"))==0)){
					i=cose((int)memoir);
					if(i){
					    memoir=tange((int)atof(input));
					    printf("tan(%d)=%.2f\n",(int)atof(input),tange((int)atof(input)));	
					}
					else {
						printf("Overflow!\n");
			        }	
				}
				else if(((strcmp(input,"F"))==0)){
					if(memoir<0){
						printf("Negative numbers' factorial can not be calculated!\n");
					}
					else {
					printf("%lld!=%lld\n",(long int)memoir,factorial((long int)memoir));
					memoir=factorial((long int)memoir);
				    }
				}
				else if(((strcmp(input,"A"))==0)){
					printf("%lf\n",absolute(memoir));
					memoir=absolute(memoir);
				}
				else if(((strcmp(input,"M"))==0)){
					rbuffer=memoir;
				}
				else if(((strcmp(input,"MR"))==0)){
					printf("%f\n",memoir);
				}
				else if(((strcmp(input,"MC"))==0)){
					memoir=0;
				}
				else if(((strcmp(input,"C"))==0)){
					rbuffer=0;
					printf("%f\n",rbuffer);
				}
	      }
	      else if(((strcmp(input,"+"))==0) || ((strcmp(input,"-"))==0) || ((strcmp(input,"/")) == 0) || ((strcmp(input,"*")) == 0) || ((strcmp(input,"%")) == 0) || ((strcmp(input,"W")) == 0)){
		        printf("enter user input:");
	            scanf("%s",input1);
	            if(atof(input1)){
	               if(((strcmp(input,"+"))==0)){
	            	printf("%f\n",memoir+atof(input1));
	            	memoir=memoir+atof(input1);
				   }
				   else if(((strcmp(input,"-"))==0)) {
				   	printf("%f\n",memoir-atof(input1));
				   	memoir=memoir-atof(input1);
				   }
	               else if(((strcmp(input,"/")) == 0)) {
	               	printf("%f\n",memoir/atof(input1));
	               	memoir=memoir/atof(input1);
				   }
				   else if(((strcmp(input,"*")) == 0)) {
				   	printf("%f\n",memoir*atof(input1));
				   	memoir=memoir*atof(input1);
			 	   }
				   else if(((strcmp(input,"%")) == 0) ) {
				   	printf("%i\n",(int)memoir%(int)atof(input1));
				   	memoir=(int)memoir%(int)atof(input1);
				   }
	               else if( ((strcmp(input,"W")) == 0)) {
	               	printf("%f\n",power(memoir,(int)atof(input1)));
	               	memoir=power(memoir,(int)atof(input1));
				   }
			 }
			 else { /*gelen deger integer deilse*/
			      printf("Invalid input for the operator (%s). \n",input);
			 }
         }
         else if(((strcmp(input,"W"))==0) || ((strcmp(input,"E"))==0)){
         	printf("enter user input:");
	        scanf("%s",input1);
	        if(atof(input1)){
         	   if(((strcmp(input,"W"))==0)){
					printf("%f\n",power(memoir,(int)atof(input1)));
					memoir=power(memoir,(int)atof(input1));    
			   }
			   else if(((strcmp(input,"E"))==0)){
					printf("%f\n",memoir*expoe((int)atof(input1)));
					memoir=memoir*expoe((int)atof(input1));    
			   }
			   else{
				printf("Invalid character. Choose from the operators below:\n----------------------------------------------------------\nsine (S), cosine (N), tangent (T), exponent (E)\npower (W), absolute (A), factorial (F)\nadd (+), subtract (-), divide(/), multiply(*), modulus (%%)\npi (P)\n Quit (Q)\n Memory (M)\n Clear (C)\n Memory Clear (MC)\nMemory Return (MR)\n----------------------------------------------------------\n");
			   }
		   }
		   else{
		   	printf("Invalid character. Choose from the operators below:\n----------------------------------------------------------\nsine (S), cosine (N), tangent (T), exponent (E)\npower (W), absolute (A), factorial (F)\nadd (+), subtract (-), divide(/), multiply(*), modulus (%%)\npi (P)\n Quit (Q)\n Memory (M)\n Clear (C)\n Memory Clear (MC)\nMemory Return (MR)\n----------------------------------------------------------\n");
		   }
		 }
		 else {
		 	if(((strcmp(input,"Q"))==0)){
		 		break;
			 }
			 else{
			 printf("Invalid character. Choose from the operators below:\n----------------------------------------------------------\nsine (S), cosine (N), tangent (T), exponent (E)\npower (W), absolute (A), factorial (F)\nadd (+), subtract (-), divide(/), multiply(*), modulus (%%)\npi (P)\n Quit (Q)\n Memory (M)\n Clear (C)\n Memory Clear (MC)\nMemory Return (MR)\n----------------------------------------------------------\n");
		     }
		 }
         
}
}
}
