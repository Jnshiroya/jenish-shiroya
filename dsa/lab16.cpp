#include<iostream>
using namespace std;
class matrix{
float **a;
int row,col;
public:
matrix()
{
row=col=3;
a=new float *[row];
for(int i=0;i<row;i++)
{
a[i]=new float[col];
}
cout<<"enter elements:"<<endl;
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cin>>a[i][j];
}
}
}
void display()
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
}
int cofactor(int num,int p,int q)
{
if(p==0 && q==0)
{
return (a[1][1]*a[2][2]-a[1][2]*a[2][1])*num;
}
if(p==0 && q==1)
{
return (a[1][0]*a[2][2]-a[1][2]*a[2][0]);
}
if(p==0 && q==2)
{
return (a[1][0]*a[2][1]-a[1][1]*a[2][0]);
}
if(p==1 && q==0)
{
return (a[0][1]*a[2][2]-a[0][2]*a[2][1]);
}
if(p==1 && q==1)
{
return (a[0][0]*a[2][2]-a[0][2]*a[2][0]);
}
if(p==1 && q==2)
{
return (a[0][0]*a[2][1]-a[0][1]*a[2][0]);
}
if(p==2 && q==0)
{
return (a[0][1]*a[1][2]-a[0][2]*a[1][1]);
}
if(p==2 && q==1)
{
return (a[0][0]*a[1][2]-a[0][2]*a[1][0]);
}
if(p==2 && q==2)
{
return (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
} 
}
float determinant()
{
return a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-
a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-
a[1][1]*a[2][0]);
}
void inverse()
{
float temp[row][col];
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
temp[i][j]=cofactor(a[i][j],i,j);
if((i+j)%2==1)
temp[i][j]=-temp[i][j];
} 
}
for(int i=0;i<row;i++)
{
for(int j=i+1;j<col;j++)
{
int tempp=temp[i][j];
temp[i][j]=temp[j][i];
temp[j][i]=tempp;
}
}
float k=determinant();
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
a[i][j]=(temp[i][j])/k;
}
}
}
};
int main()
{
matrix m;
cout<<"before inverse,your matrix:"<<endl;
m.display();
m.inverse();
cout<<"After inverse,your matrix:"<<endl;
m.display();
return 0;
}
