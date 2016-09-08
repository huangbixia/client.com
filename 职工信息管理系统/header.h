#define SIZE 20

//����һ���ṹ��洢ְ����Ϣ
typedef struct clerk
{
	char no[7];
	char name[SIZE];
	char sex[3];
	int age;
	char dept[SIZE];
	char profession[SIZE];
	char job[SIZE];
	float salary;
	char number[11];
	struct clerk * next;
}Clerk,*PClerk;


//����һ���ṹ��洢�û���������
typedef struct check
{
	char user[SIZE];
	char pwd[SIZE];
	struct check * next;
}user,*Puser;



//�˵�
int menu();

//��ӭ����
int Welcom();

//��ʼ��ָ��
PClerk Init();

//��ȡ��������
int get_length(PClerk p);

//���ѡ���Ƿ���ȷ
int Check(char str[SIZE],int min,int max);

//��ʾְ����Ϣ
void Show_Data(PClerk p);

//��������
void Add_Data(PClerk p);


/*ɾ������*/

void Delete_Data(PClerk p);

void DeleteNo(PClerk p);//��ְ����ɾ��ְ����Ϣ

void DeleteName(PClerk p);//��ְ������ɾ��ְ����Ϣ

void DeleteNumber(PClerk p);//���绰����ɾ��ְ����Ϣ

/*ɾ����������*/


/*ͳ��ָ��������λ��ְ������*/

void CountClerk(PClerk p);

void CountCall(PClerk p);

void CountCsex(PClerk p);

int CountCdept(PClerk p,char dept[SIZE]);

/*ͳ��������������*/


/*ͳ��ָ��������λ��ְ�������ܶ�*/

void CountSalary(PClerk p);

void CountSall(PClerk p);

void CountSdept(PClerk p);

/*ͳ�ƹ��ʺ�������*/


/*ƽ������*/

void AvgSalary(PClerk p);

void AvgSall(PClerk p);//��ѯ��ƽ������

void AvgSdept(PClerk p);//�����Ų�ѯƽ������

/*��ѯƽ�����ʽ���*/


/*��ѯ����*/

void Query(PClerk p);

void QueryNo(PClerk p);//��ְ���Ų�ѯְ����Ϣ

void QueryNumb(PClerk p);//��ְ���绰�����ѯְ����Ϣ

void QueryName(PClerk p);//��������ѯ��Ϣ

void QueryDept(PClerk p);//�����Ų�ѯ��Ϣ

void QuerySex(PClerk p); //���Ա����

/*��ѯ��������*/


/*������*/

void Sort(PClerk p);

void SortSalary(PClerk p);  //����������

void SortAge(PClerk p);  //����������

/*����������*/


//�޸�����
void UpdateData(PClerk p);

//���ļ����ݵ�������
void Foutput_Data(PClerk p);

//�����ݴ����ļ�
void Finput_Data(PClerk p);

//�������ݼ�����ͼ
void DataGraph(PClerk p); 

//������Ա��Ϣ����
void User(void);

//�˳�����
int end();