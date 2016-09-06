#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,counta=0,countb=0,range;
	FILE *file;
	printf("Å¬’l:");
	scanf("%d",&b);
	printf("Å‘å’l:");
	scanf("%d",&a);
	printf("”ÍˆÍ:");
	scanf("%d",&range);
	file=fopen("countsosuu.csv","w");
	for(;b<=a;b++){
		if(issosuu(b)){
			countb++;
		}
		printf("\r%d/%d",b,a);
		counta++;
		if(counta==range){
			fprintf(file,"%d,%d\n",b,countb);
			counta=0;
			countb=0;
		}
	}
	printf("\nŠ®—¹‚µ‚Ü‚µ‚½B\n");
	fclose(file);
	
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