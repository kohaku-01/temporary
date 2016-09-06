#include<stdio.h>

issosuu(int);

int main(void){
	int a;
	scanf("%d",&a);
	if(issosuu(a)){
		printf("%d‚Í‘f”‚Å‚·",a);
	}else{
		printf("%d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ",a);
	}
	return 0;
}

int issosuu(int data){
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