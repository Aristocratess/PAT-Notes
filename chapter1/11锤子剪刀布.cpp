//锤子剪刀布 
#include<cstdio>
int change(char c)//B为0，C为1，J为2，恰好是循环相克顺序，且字典序递增 
{
	if(c=='B')
	  return 0;
	if(c=='C')
	  return 1;
	if(c=='J')
	  return 2;    
} 

int main()
{
	char mp[3]={'B','C','J'};
	int n;
	scanf("%d",&n);
	int times_A[3]={0},times_B[3]={0}; //分别记录甲、乙的胜、平、负次数
	//按BCJ顺序分别记录甲乙3种手势的获胜次数
	int hand_A[3]={0},hand_B[3]={0};
	char c1,c2;
	int k1,k2;
	for(int i=0;i<n;i++)
	{
		getchar();
		scanf("%c %c",&c1,&c2);
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2)
		{
			times_A[0]++;
			times_B[0]++;
			hand_A[k1]++;//甲靠k1赢的次数加1 
		}
		else if(k1==k2)
		{//平局 
			times_A[1]++;
			times_B[1]++;
			hand_B[k2]++; //乙靠k2赢的次数加1 
		}
	 }
	printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
	printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);
	int id1=0,id2=0;
	for(int i=0;i<3;i++)
	{//找出甲乙获胜次数最多的手势 
		if(hand_A[i]>hand_A[id1])
		   id1=i;
		if(hand_B[i]>hand_B[id2])
		   id2=i;     
	  }  
	 printf("%c %c\n",mp[id1],mp[id2]); //转变回BCJ
	 return 0; 
}
