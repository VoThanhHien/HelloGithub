#include<stdio.h>
int main(){
	int T,t=0;
	scanf("%d",&T);
	while(t!=T){
		int m,n,result,intermediate1,intermediate2;
		scanf("%d %d",&m,&n);
		intermediate1=m/2;
		intermediate2=n/2;
		if(m==1||n==1){
			if(m==1){
				result=n;
			}
			else if(n==1){
				result=m;
			}
		}//result =m*n;
		if(m==2||n==2){
			if(m==2){
				if(n%2!=0){
					result=n+1;
				}
				else if(n%4==0){
					result=n;
				}
				else{
					result=n+2;
				}
			}
			else if(n==2){
				if(m%2!=0)
				{
					result=m+1;
				}
				else if(m%4==0)
				{
					result=m;
				}
				else
				{
					result=m+2;
				}
			}
		
		}
		else if(m%2!=0)
		{
			if(n%2!=0){
				result=(intermediate1+1)*(intermediate2+1)+(intermediate1*intermediate2);
			}
		else{
				result=(intermediate1*2+1)*intermediate2;
			}
		}
		else{
			result=(m*n)/2;
		
		}
		printf("Case %d: %d\n",t+1,result);
		t++;
	}
}
