#include<stdio.h>

int main(void)
{
	bigint a,b;
	scanf("%d",&a);
	for(b=2;b<=a;){
		if(a==b){
			printf("%d",b);
			break;
		}
		if(!(((float)a/(float)b)-(int)((float)a/(float)b))){
			printf("%d*",b);
			a/=b;
		}else{
			b++;
		}
	}
	
	return 0;
}

/*
100000000�܂ł̐���ȓ�����m�F
*/