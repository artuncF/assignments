#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <stdlib.h>
int app_Luhn(char*);
int num_digit(char*);
int input_check(char*);
int visa_or_master(char*);

int num_digit(char* ptr)
{
	int len = strlen(ptr);
	int num=0;
	for(int i=0;i<len;i++)
	{
		num++;
	}
	return num;
}
int visa_or_master(char* ptr)
{
	if(ptr[0]=='4')
	{
		return 4;
	}
	else if(ptr[0]=='5')
	{
		return 5;
	}
	else
	{
		return 0;
	}
}
int input_check(char* ptr)
{
	int len = strlen(ptr);
	for(int i=0;i<len;i++)
	{
		if(isdigit(ptr[i])==0)
		{
			return 0;
		}
	}
	return 1;
}
int app_Luhn(char* ptr)
{
	int sum=0;
	int x;
	int len = strlen(ptr);
	for(int i=1;i<len-1;i+=2)
	{
		x=ptr[i]-'0';
		x*=2;
		x=x%10 + (x/10)%10;
		for(int j=i-1;j<=len-1;j+=2)
		{
			sum+=x + (ptr[j]-'0');
		}
	}
	if(sum%10)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
int main(void)
{
	char* input = malloc(sizeof(long long int));
	
	printf("Number: ");
	scanf("%s",input);
	
	while(1)
	{
		if(input_check(input))
		{
			switch(num_digit(input))
			{
				case 13:
					if(app_Luhn(input))
					{
						printf("VISA\n");
						break;
					}
					else
					{
						printf("INVALID\n");
					}
				case 15:
					if(app_Luhn(input))
					{
						printf("AMEX\n");
						break;
					}
					else
					{
						printf("INVALID\n");					
					}
				case 16:
					switch(visa_or_master(input))
					{
						case 4:
							if(app_Luhn(input))
							{
								printf("VISA\n");
								break;	
							}
							else 
							{
								printf("INVALID\n");
							}
						case 5:
							if(app_Luhn(input))
							{
								printf("MASTERCARD\n");	
								break;
							}
							else 
							{
								printf("INVALID\n");
							}
					}	
			}
			printf("Number: ");
			scanf("%s",input);
		}
		else 
		{
			printf("retry: ");
			scanf("%s",input);
		}
	}
	return 0;	
}
