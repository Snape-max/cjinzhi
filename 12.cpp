#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void)

{

	cout<<"baba hhhhh"<<endl;

	cout<<"*********************"<<endl;

	cout<<setw(4)<<"jinzhi change system"<<endl;

    int b,c,d,e,f,g;

	char y;

	
    do

	{

    cout<<"*********************"<<endl;

	cout<<"before jinzhi: ";

	cin>>g;

	cout<<"goto jinzhi: "; 

	cin>>f;

	cout<<"input wanted number: ";
	
	
	cin>>b;
	
	//获取位数 
	int b1; 		//防止b改变 
	int count=0;
	while(b1!=0)
	{
		b1 = b1/10;
		count++;
	}
	
	int list[count];
	
	//
	//将每一位储存列表l中 
	for(int i1=0;i1<count;i1++){
		int u1;
		int k = pow(10,i1);
		u1 = b1/k%10;
		list[i1] = u1;
	}
	
	//判断每位是否大于进制
	bool list2[count];
	for(int i2 =0;i2<count;i2++){
		if(g<=list[i2])
			list2[i2] = false;
		else
			list2[i2] = true;
	} 
	
	
	bool i = true;
	for(int p=0;p<count;p++)
	{
		i = i&&list[p];
	}

	
	
	d=1,e=0;

	

	

		if(b>0.9&&i)

		{

			c=b%f;

			e=e+d*c;

			d=g*d;

            b=b/f;

		}
		else{
			cout<<"wrong!"<<endl;
		}

	

		cout<<"goto: "<<e<<endl;

		cout<<"wanted to change again?(y/n)";

		cin>>y;

	}while(y==121);

	cout<<"Thanks for using!"<<endl;

		return 0;

}
