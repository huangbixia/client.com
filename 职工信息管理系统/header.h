#define SIZE 20

//定义一个结构体存储职工信息
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


//定义一个结构体存储用户名和密码
typedef struct check
{
	char user[SIZE];
	char pwd[SIZE];
	struct check * next;
}user,*Puser;



//菜单
int menu();

//欢迎界面
int Welcom();

//初始化指针
PClerk Init();

//获取单链表长度
int get_length(PClerk p);

//检查选择是否正确
int Check(char str[SIZE],int min,int max);

//显示职工信息
void Show_Data(PClerk p);

//增加数据
void Add_Data(PClerk p);


/*删除函数*/

void Delete_Data(PClerk p);

void DeleteNo(PClerk p);//按职工号删除职工信息

void DeleteName(PClerk p);//按职工姓名删除职工信息

void DeleteNumber(PClerk p);//按电话号码删除职工信息

/*删除函数结束*/


/*统计指定二级单位的职工人数*/

void CountClerk(PClerk p);

void CountCall(PClerk p);

void CountCsex(PClerk p);

int CountCdept(PClerk p,char dept[SIZE]);

/*统计人数函数结束*/


/*统计指定二级单位的职工工资总额*/

void CountSalary(PClerk p);

void CountSall(PClerk p);

void CountSdept(PClerk p);

/*统计工资函数结束*/


/*平均工资*/

void AvgSalary(PClerk p);

void AvgSall(PClerk p);//查询总平均工资

void AvgSdept(PClerk p);//按部门查询平均工资

/*查询平均工资结束*/


/*查询函数*/

void Query(PClerk p);

void QueryNo(PClerk p);//按职工号查询职工信息

void QueryNumb(PClerk p);//按职工电话号码查询职工信息

void QueryName(PClerk p);//按姓名查询信息

void QueryDept(PClerk p);//按部门查询信息

void QuerySex(PClerk p); //按性别查找

/*查询函数结束*/


/*排序函数*/

void Sort(PClerk p);

void SortSalary(PClerk p);  //按工资排序

void SortAge(PClerk p);  //按年龄排序

/*排序函数结束*/


//修改数据
void UpdateData(PClerk p);

//把文件数据导入链表
void Foutput_Data(PClerk p);

//把数据存入文件
void Finput_Data(PClerk p);

//制作数据简单条形图
void DataGraph(PClerk p); 

//管理人员信息处理
void User(void);

//退出界面
int end();