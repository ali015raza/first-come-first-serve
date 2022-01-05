#include<stdio.h>
void Built_in()
{
  int process[3]={1,2,3};
    int arrival_time[3]={0,0,0};
    int burst_time[3]={3,3,24};
    int waiting_time[3];
    int finish_time[3];
    int Turn_around_Time[3];
    int temp=0;
    for(int i=0;i<=2;i++)
    {
        temp=temp+burst_time[i];
        finish_time[i]=temp;
    }
    for(int i=0;i<=2;i++)
    {
        waiting_time[i]=finish_time[i]-burst_time[i]-arrival_time[i];
    }
    for(int i=0;i<3;i++)
    {
        Turn_around_Time[i]=burst_time[i]+waiting_time[i];
    }
    printf("\n\nProcess  Burst_Time  arrival_Time  Finish_Time  Waiting_Time  Turn_around_Time\n");
    for(int i=0;i<=2;i++)
    {
        printf(" %d\t  %d\t\t %d\t \t%d \t\t%d \t%d \n",process[i],burst_time[i],arrival_time[i],finish_time[i],waiting_time[i],Turn_around_Time[i]);
    }
}
void User_Defined()
{
   int n;
    printf("Enter Number of process : ");
    scanf("%d",&n);
    int process[n];
    for(int i=0;i<n;i++)
    {
        process[i]=i+1;
    }
  
    int arrival_time[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter arrival_time of process %d : ",process[i]);
        scanf("%d",&arrival_time[i]);
    }

    int burst_time[n];
    for(int i=0;i<n;i++)
    {
        printf(" Enter Burst_time of process %d  : ",process[i]);
        scanf("%d",&burst_time[i]);
    }
   int waiting_time[n];
    int finish_time[n];
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=temp+burst_time[i];
        finish_time[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        waiting_time[i]=finish_time[i]-burst_time[i]-arrival_time[i];
    }
    int Turn_around_Time[n];
    for(int i=0;i<n;i++)
    {
        Turn_around_Time[i]=burst_time[i]+waiting_time[i];
    }
    printf("\n\nProcess  Burst_Time  arrival_Time  Finish_Time  Waiting_Time  Turn_around_Time\n");
    for(int i=0;i<=2;i++)
    {
        printf(" %d\t  %d\t\t %d\t \t%d \t\t%d \t%d\n",process[i],burst_time[i],arrival_time[i],finish_time[i],waiting_time[i],Turn_around_Time[i]);
    }   
}
int main()
{
    int s;
    printf("Enter 1 For Built in values and 2 For user Defined values : ");
    scanf("%d",&s);
    if(s==1)
    Built_in();
    else if(s==2)
    User_Defined();
    else
    printf("Invalid Choice : ");
    
}