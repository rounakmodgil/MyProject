#include"stdio.h"

#include"conio.h"

#include"string.h"

void main()

{
  char k[10][5],t[5];
  
int i=0,j=0,totalwtime=0,temp=0,n=0;
  
int ptime[10],wtime[10],proty[10];
  
float avgwtime;
 
printf("enter no of processes:");
 
scanf("%d",&n);
  
for(i=0;i<n;i++)
  
{
  
printf("enter process%d name:",i+1);
 
scanf("%s",&k[i]);
  
printf("enter process time:");
 
scanf("%d",&ptime[i]);
  
printf("enter priority:");
  
scanf("%d",&proty[i]);
  
}
 
for(i=0;i<n-1;i++)
 
{
 
for(j=i+1;j<n;j++)
 
{
 
  if(proty[i]>proty[j])

 {
   temp=proty[i];

 proty[i]=proty[j];

  proty[j]=temp;

  temp=ptime[i];

  ptime[i]=ptime[j];

  ptime[j]=temp;

 strcpy(t,k[i]);

 strcpy(k[i],k[j]);

  strcpy(k[j],t);

  }

  }

  }
 
wtime[0]=0;

for(i=1;i<n;i++)
  
{
   
wtime[i]=wtime[i-1]+ptime[i-1];

totalwtime=totalwtime+wtime[i];

   }  

avgwtime=(float)totalwtime/n;  

printf("p_name\t p_time\t priority\t w_time\n");

for(i=0;i<n;i++)  

{
   
printf(" %s\t %d\t %d\t %d\n" ,k[i],ptime[i],proty[i],wtime[i]);

   }
  
printf("total waiting time=%d\n avg waiting time=%f",totalwtime,avgwtime);

  getch();

   }
