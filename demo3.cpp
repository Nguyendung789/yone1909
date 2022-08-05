#include <stdio.h>
int main(){
	//input num
	int num;
	printf("nhap num=");
	scanf("%d",&num);

	int r;
	r = num % 2;//mod: chia lay du -> %
	if(r==0){//so danh=
		//yes
		printf("number is even");
	}else{
		//no
		printf("number is odd");
	}
}