//Boys vs Girls
#include<cstdio>
struct person{
	char name[15];
	char id[15];
	int score;
}M,F,temp; //MΪ������ͷ�������Ϣ��FΪŮ����߷�������Ϣ

void Init(){
	M.score=10;
	F.score=-1;
} 

int main()
{
	Init();
	int n;
	char gender;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s %c %s %d",temp.name,&gender,temp.id,&temp.score);
		if(gender=='M'&&temp.score<M.score)
		{
			M=temp;
		}
		else if(gender=='F'&&temp.score>F.score){
			F=temp;
		}
	}
	if(F.score==-1) printf("Absent!\n");//û��Ů��
	else printf("%s %s\n",F.name,F.id);
	if(M.score==101) printf("Absent!\n");//û������
	else printf("%s %s\n",M.name,M.id);
	if(F.score==-1||M.score==101) printf("NA!\n");//û��Ů��������
	else printf("%d\n",F.score-M.score);
	return 0; 
}

