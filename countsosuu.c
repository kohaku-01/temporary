#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,counta=0,countb=0,range;
	FILE *file;
	printf("最小値:");
	scanf("%d",&b);
	printf("最大値:");
	scanf("%d",&a);
	printf("範囲:");
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
	printf("\n完了しました。\n");
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