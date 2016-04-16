/*Insertion sort with 5 length array. It is exam question in introduction to programming course*/
#include <stdio.h>
#include <stdlib.h>
int search(int [],int,int);
int main(){
	int a[5];
	int j,tmp,i,count=0;
	
	while(count<6){
		printf("Enter an integer: ");
    	scanf("%d",&a[count]);
    if(count==5){
    	printf("maximum number is exceeded!\n");
    	printf("Enter any integer: ");
    	scanf("%d",&a[count]);
    	printf("\ninsertion sort is successfully terminated!!");
    	exit(1);
	}
    else if(search(a,a[count],count)){
    	printf("%d is already inserted\n",a[count]);
    	printf("Sorted List: ");
	   for(i=0;i<count;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	}
    else{
    	for(i=0;i<count;i++){
		for(j=i+1;j<=count;j++){
			if(a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("Sorted List: ");
	   for(i=0;i<=count;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	count++;
	}
    
	}
	
	return 0;
}

int search(int a[],int x,int b){
	int i;
	for(i=b;i>0;i--){
		if(a[i-1]==x){
			return 1;
		}
	}
	return 0;
}
