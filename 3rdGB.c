#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,c,d,e,count=0;
	FILE *file;
	printf("ç≈è¨íl:");
	scanf("%d",&b);
	printf("ç≈ëÂíl:");
	scanf("%d",&a);
	file=fopen("3rdGB.csv","w");
	for(;b<=a;b+=2){
		for(c=0;c<b;c++){
			for(d=0;d<=b-c;d++){
				for(e=0;e<b-c-d;e++){
					if(issosuu(c)&&issosuu(d)&&issosuu(e)&&issosuu(b-c-d-e)){
						count++;
					}
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