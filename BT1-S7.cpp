#include<stdio.h>

int main(){
	int a[8];
	int b[5]={2,4,6,8,10};
	for(int i=0;i<5;i++){
		printf("%d\n",b[i]);
	}
	int size=sizeof(b)/sizeof(b[0]);
	printf("so luong cua mang la %d\n",size);
	
	return 0;
}
