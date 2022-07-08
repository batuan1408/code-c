#include<stdio.h>
#include<math.h>
int n;
int a,b;
void nhapn(){
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
}
void nhapa_b(){
    do{
    	printf("nhap a,b(b>n hoac b chia het cho 2): ");
	    scanf("%d%d",&a,&b);
	}while(b<=n||b%2!=0);
	
}
float p(int n,int a,int b){
	float ketqua=sqrt(2106);
	int c=a;
	int dau=1;
	for(int i=1;i<=n;i++){
	    c*=a;
	    dau*=(-1);
	    ketqua+=((float)(dau*c+i)/(b+dau*i));
	}
	return ketqua;
	
}
int main(){
	nhapn();
	nhapa_b();
	printf("ket qua = %.2f",p(n,a,b));

return 0;
}

