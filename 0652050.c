#include<stdio.h>

int main(void)
{
	float a,b,c; 
	 
	printf("high and weight\n");
	scanf("%f%f",&a,&b);
	
	c=b/((a/100)*(a/100)); 
	
	if(c>=24&&c<27){
		printf("%fover\n",c);
	}
	
	
	if(c>18.5 && c<24){
		printf("%fnormal\n",c);
	}
	
	
	if(c<=18.5){
		printf("%fthin\n",c);
	}
	
	
	if(c>=27 && c<30){
		printf("%ffat\n",c);
	}
	
	
	if(c>=30 && c<35){
		printf("%fmiddle fat\n",c);
	}
	
	
	if(c>=35){
		printf("%fmore fat\n",c);
	}
}
