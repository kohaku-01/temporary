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
//					fprintf(file,"a=%d,b=%d,c=%d,d=%d,count=%d\n",a,b,c,d,count);
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