#include<stdio.h>
 
int main(){
	int n,m;
	int a,b;//a b为循环变量 
	int c=1;//c为第几个素数 
	int sum=0;//求和 
	do{
   scanf("%d %d",&n,&m);
}while(0>=n||n>m||m>200);//do while循环，当n,m输入不是0<n<m<200时无限循环 
	
	for(a=2;c<=m;a++){		
		int f=1;//定义素数 (f为1时是素数） 
		for(b=2;b<a;b++){
			if(a%b==0){
			    f=0;
			}
		}
		if(f==1){
		    if(c>=n) {
		        sum+=a;
            }
		    c++;
		}
	}
	printf("%d",sum);
	return 0;
}