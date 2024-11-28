#include<stdio.h>

int main(){
   int a[5];

for(int i=0;i<5;i++){
		printf("moi ban nhap gia tri cua mang \n");
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3] && a[0]>a[4]){
		printf("a[0] co gia tri %d la gia tri lon nhat\n",a[0]);
	}
     else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3] && a[1]>a[4]){
		printf("a[1] co gia tri %d la gia tri lon nhat\n",a[1]);
	}
   else	if(a[2]>a[1] && a[2]>a[0] && a[2]>a[3] && a[2]>a[4]){
		printf("a[2] co gia tri %d la gia tri lon nhat\n",a[2]);
	}
   else	if(a[3]>a[1] && a[3]>a[2] && a[3]>a[0] && a[3]>a[4]){
		printf("a[3] co gia tri %d la gia tri lon nhat\n",a[3]);
	}
   else{
		printf("a[4] co gia tri %d la gia tri lon nhat\n",a[4]);
	}
	if(a[0]<a[1] && a[0]<a[2] && a[0]<a[3] && a[0]<a[4]){
		printf("a[0] co gia tri %d la gia tri nho nhat\n",a[0]);
	}
     else if(a[1]<a[0] && a[1]<a[2] && a[1]<a[3] && a[1]<a[4]){
		printf("a[1] co gia tri %d la gia tri nho nhat\n",a[1]);
	}
   else	if(a[2]<a[1] && a[2]<a[0] && a[2]<a[3] && a[2]<a[4]){
		printf("a[2] co gia tri %d la gia tri nho nhat\n",a[2]);
	}
   else	if(a[3]<a[1] && a[3]<a[2] && a[3]<a[0] && a[3]<a[4]){
		printf("a[3] co gia tri %d la gia tri nho nhat\n",a[3]);
	}
   else{
		printf("a[4] co gia tri %d la gia tri nho nhat\n",a[4]);
	}
	
	return 0;
}
