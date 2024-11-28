#include<stdio.h>

int main(){
   int a[5];

for(int i=0;i<5;i++){
		printf("moi ban nhap gia tri cua mang \n");
		scanf("%d",&a[i]);
	}
	if(a[0] % 2==0){
		a[0]+=3;
	}
	else{
		a[0]+=2;
	}
      if(a[1] % 2==0){
		a[1]+=3;
	}
	else{
		a[1]+=2;
	}
	if(a[2] % 2==0){
		a[2]+=3;
	}
	else{
		a[2]+=2;
	}
	if(a[3] % 2==0){
		a[3]+=3;
	}
	else{
		a[3]+=2;
	}
	if(a[4] % 2==0){
		a[4]+=3;
	}
	else{
		a[4]+=2;
	}
	printf("[%d,%d,%d,%d,%d]",a[0],a[1],a[2],a[3],a[4]);
	
	return 0;
}
