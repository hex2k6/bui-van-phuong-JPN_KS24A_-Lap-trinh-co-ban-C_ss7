#include<stdio.h>

int main(){
	int a[5];
	int so=5;
	for(int i=0;i<5;i++){
		printf("moi nhap gia tri cua mang\n");
		scanf("%d",&a[i]);
	}
	if (a[0] %2==0){
		printf("%d la gia tri chan\n",a[0]);
	}
	 if(a[1] %2==0){
			printf("%d la gia tri chan\n",a[1]);
			so--;
	}
	if(a[2] %2==0){
		printf("%d la gia tri chan\n",a[2]);
		so--;
	}
	if(a[3] %2==0){
			printf("%d la gia tri chan\n",a[3]);
			so--;
	}
	if(a[4] %2==2){
			printf("%d la gia tri chan\n",a[4]);
			so--;
	}
    if(so=0){
    printf("khong co gia tri nao chan het\n");
	}
   
	return 0;
}
