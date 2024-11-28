#include<stdio.h>

int main(){
	int n;
	
	printf("moi ban nhap kich thuoc mang \n ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("moi ban nhap gia tri cua mang\n");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d = %d\n",i,a[i]);
	}
	
	return 0;
}
