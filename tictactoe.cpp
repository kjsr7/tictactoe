#include<iostream>
using namespace std;
int main()
{
	char a[3][3];int i,j,k=1,c=0,d=0,m=1;
	char temp='A',n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=temp;
			++temp;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	while(k&&m)
	{
		cout<<"enter the desired position"<<endl;
		cin>>n;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]==n)
				{
					if(k%2==1)
					a[i][j]='X';
					else
					a[i][j]='O';
				}
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j];
			}cout<<endl;
		}
		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&a[2][2]==a[0][0]||a[2][0]==a[1][1]&&a[1][1]==a[0][2]&&a[0][2]==a[2][0])
		{
			if(k%2==1)
			{cout<<"player x wins"<<endl;m=0;}
			else
		{	cout<<"player o wins"<<endl;m=0;}
			k=0;
		}
	else
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][0]==a[i][j])
				++c;}
				if(c==3)
{		m=0;	break;}
				else
		{		c=0;
				continue;}
		}
		for(j=0;j<3;j++)
		{
			for(i=0;i<3;i++)
			{
				if(a[0][j]==a[i][j])
				++d;}
				if(d==3)
			{m=0;	break;}
				else
				{d=0;
				continue;}
		}
		if(d==3||c==3)
		{
			if(k%2==1)
			cout<<"player x wins"<<endl;
			else
			cout<<"player o wins"<<endl;
			k=0;
		}
		else
		{c=0;d=0;}
	}++k;
	}}
	
				
		         
		