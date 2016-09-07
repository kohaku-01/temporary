#include<stdio.h>

int issosuu(int);

int main(void)
{
	int a,b,c,d,e,f,count=0;
	FILE *file;
	printf("ç≈è¨íl:");
	scanf("%d",&b);
	printf("ç≈ëÂíl:");
	scanf("%d",&a);
	file=fopen("4thGB.txt","w");
	for(;b<=a;b+=2){
		for(c=0;c<b;c++){
			for(d=0;d<b-c;d++){
				for(e=0;e<b-c-d;e++){
					for(f=0;f<b-c-d-e;f++){
						if(issosuu(c)&&issosuu(d)&&issosuu(e)&&issosuu(f)&&issosuu(b-c-d-e-f)){
							fprintf(file,"%d+%d+%d+%d+%d=%d\n",c,d,e,f,b-c-d-e-f,b);
							count++;
						}
					}
				}
			}
		}
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