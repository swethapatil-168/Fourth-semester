class program1{
public static void main(String args[]){
int twoD[][]=new int[4][4];
int i,j,k=1;
for(i=0;i<4;i++)
for(j=0;j<i+1;j++)
{
twoD[i][j]=k;
k++;
}
for(i=0;i<4;i++)
{
for(j=0;j<i+1;j++)
{
System.out.print(twoD[i][j]+" ");
}
System.out.println();
}
}
}
