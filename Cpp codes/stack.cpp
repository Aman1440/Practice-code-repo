#include<iostream>

using namespace std;


class stackk
{
public:
int top;
int s[100];
stackk()
{
  top=-1;
}

void operator +(int d)
{
top++;
s[top]=d;
cout<<"\nData added is"<<s[top];


}
void operator --()
{
top--;
}

void operator ~()
{
int a=top;
while(a>=0)
{
cout<<s[a];
a--;
}
}

};
int main()
{
stackk s1;
int data,ch;
char f='y';
while(f=='y')
{
cout<<"\n1.Push \n2.Pop \n3.Display";
cout<<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter the data to push :";
cin>>data;
s1+data;
break;
case 2:
--s1;
break;
case 3:
~s1;
break;
case 4:return 0;
break;
}
cout<<"\nPress y to conitnue";
cin>>f;
}
return 1;
}
