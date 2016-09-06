#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,c,count=0;
	FILE *file;
	printf("ç≈è¨íl:");
	scanf("%d",&b);
	printf("ç≈ëÂíl:");
	scanf("%d",&a);
	file=fopen("Goldbach.csv","w");
	for(;b<=a;b+=2){
		for (c=1;c<b;c++){
			if(issosuu(c)&&issosuu(b-c)){
				count++;
			}
		}
		fprintf(file,"%d,%d\n",b,count);
		count=0;
		printf("\r%d/%d",b,a);
	}
	fclose(file);
	printf("\näÆóπÇµÇ‹ÇµÇΩÅB");
	
	return 0;
}

int issosuu(int data)
{
	int a,b;
	if(data<2){
		return 0;
	}
	for(b=2;b<=data;b++){
		if(b==data){
			return 1;
		}
		if(!(((float)data/(float)b)-(int)((float)data/(float)b))){
			return 0;
		}
	}
	return 1;
}