#include<stdio.h>
int timetoseconds(int h,int m,int s){
	return h*3600+m*60+s;
}
int main(){
	int h1,m1,s1,h2,m2,s2,diff=0;
	printf("enter the time1:");
	scanf("%d",&h1);
	scanf("%d",&m1);
	scanf("%d",&s1);
	printf("enter time 2:");
	scanf("%d",&h2);
	scanf("%d",&m2);
	scanf("%d",&s2);
	int time1=timetoseconds(h1,m1,s1);
	int time2=timetoseconds(h2,m2,s2);
	diff=time1-time2;
	printf("diff=%d",diff);
	return 0;
}
