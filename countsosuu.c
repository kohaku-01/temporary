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
	int a;
	if(data<2){
		return 0;
	}
	for(a=2;a<=data;a++){
		if(a==data){
			return 1;
		}
		if(!(((float)data/(float)a)-(int)((float)data/(float)a))){
			return 0;
		}
	}
	return 1;
}