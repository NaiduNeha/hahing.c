#include<stdio.h>
int hash(int x)
{
return x%7;
}
void insert(int a[7],int x)
{
int i=hash(x);
int flag=0,j;
if(a[i]==-1)
{
a[i]=x;
flag=1;
}
else
{
for(j=i+1;j<7;j++)
{
if(a[j]==-1)
{
a[j]=x;
flag=1;
break;}
}
for(j=0;j<i;j++)
{
if(a[j]==-1)
{
a[j]=x;
flag=1;
break;
}
}
}
}
void display(int a[7])
{
for(int i=0;i<7;i++)
{
printf("%d ",a[i]);
}
}
void search(int a[7],int x)
{
int i=hash(x);int flag=0,j;
if(a[i]==x)
{
flag=1;
}
else
{
for(j=i+1;j<7;j++)
{
if(a[j]==x)
{
flag=1;
break;
}
}
for(j=0;j<i&&flag==0;j++)
{
if(a[j]==x)
{
flag=1;
break;
}
}
}
if(flag==1)
{
printf("element found");
}
else
{
printf("element not found");
}
}
void delete(int a[7],int x)
{
int i=hash(x);
int j,flag=0;
if(a[i]==x)
{
a[i]=-1;
flag=1;
}
else
{
for(j=i+1;j<7;j++)
{
a[j]=-1;
flag=1;
break;
}
}
for(j=0;j<i&&flag==0;j++)
{
if(a[j]==x)
{
a[j]=-1;
flag=1;
break;
}
}
}
}
int main()
{
int a[7],x,flag=0,ch,i;
for(i=0;i<7;i++)
{
a[i]=-1;
}
for(int k=0;k<6;k++)
{
printf("enter elememt to insert");
scanf("%d",&x);
insert(a,x);
}
display(a);
printf("eneter element to serach");
scanf("%d",&x);
search(a,x);
printf("enter element to delete");
scanf("%d",&x);
delete(a,x);
display(a);
(
