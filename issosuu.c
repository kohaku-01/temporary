#include<stdio.h>

issosuu(int);

int main(void){
	int a;
	scanf("%d",&a);
	if(issosuu(a)){
		printf("%d�͑f���ł�",a);
	}else{
		printf("%d�͑f���ł͂���܂���",a);
	}
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