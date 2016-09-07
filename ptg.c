#include<stdio.h>

int sks(int,int,int);

int main(void)
{
	int a,b,c,d;
	FILE* file;
	scanf("%d",&a);
	file=fopen("Pythagorean.csv","w");
	for(b=1;b<=a;b++){
		for(c=1;c<=b;c++){
			for(d=1;d<=c;d++){
				if(d*d+c*c==b*b && sks(d,c,b)==1){
					fprintf(file,"%d,%d,%d\n",d,c,b);
					printf("\r%d/%d %d,%d,%d",b,a,d,c,b);
				}
			}
		}
	}
	printf("\nŠ®—¹‚µ‚Ü‚µ‚½");
	fclose(file);
	
	return 0;
}

int sks(int a,int b,int c)
{
	int ret,div;
	for(div=1;div<=a;div++){
		if((!((float)a/(float)div-(int)((float)a/(float)div))) && (!((float)b/(float)div-(int)((float)b/(float)div))) && (!((float)c/(float)div-(int)((float)c/(float)div)))){
			ret=div;
		}
	}
	return ret;
}