//���Ӽ����� 
#include<cstdio>
int change(char c)//BΪ0��CΪ1��JΪ2��ǡ����ѭ�����˳�����ֵ������ 
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
	int times_A[3]={0},times_B[3]={0}; //�ֱ��¼�ס��ҵ�ʤ��ƽ��������
	//��BCJ˳��ֱ��¼����3�����ƵĻ�ʤ����
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
			hand_A[k1]++;//�׿�k1Ӯ�Ĵ�����1 
		}
		else if(k1==k2)
		{//ƽ�� 
			times_A[1]++;
			times_B[1]++;
			hand_B[k2]++; //�ҿ�k2Ӯ�Ĵ�����1 
		}
	 }
	printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
	printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);
	int id1=0,id2=0;
	for(int i=0;i<3;i++)
	{//�ҳ����һ�ʤ������������ 
		if(hand_A[i]>hand_A[id1])
		   id1=i;
		if(hand_B[i]>hand_B[id2])
		   id2=i;     
	  }  
	 printf("%c %c\n",mp[id1],mp[id2]); //ת���BCJ
	 return 0; 
}
