#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,c,d,count=0;
	FILE *file;
	printf("ç≈è¨íl:");
	scanf("%d",&b);
	printf("ç≈ëÂíl:");
	scanf("%d",&a);
	file=fopen("WGB.csv","w");
	for(;b<=a;b+=2){
		for(c=0;c<b;c++){
			for(d=0;d<=b-c;d++){
				if(issosuu(c)&&issosuu(d)&&issosuu(b-c-d)){
					count++;
				}
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