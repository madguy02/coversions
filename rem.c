int [][] rem(int a[][100],intb[][100])
{int m,n,k,p,r[100][100];
m=sizeof(a)/sizeof(a[0]);
k=(sizeof(a)/sizeof(a[0][0]))/m;
n=sizeof(b)/sizeof(b[0]);
p=(sizeof(b)/sizeof(b[0][0]))/n;
for(i=0;i<=m;i++)
{
for(j=0;i<k;i++)
{
r[i][j]=a[i][j]%b[i][j];
}
}
return r;
}



