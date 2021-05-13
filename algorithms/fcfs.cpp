//OS-Scheduling Algorithm- First Come First Serve.

#include<bits/stdc++.h>
using namespace std;

#define lld long long int

vector< lld >burst_time;
lld x,sum = 0, i = 0, size;

void fcfs()
{
    lld size = burst_time.size();

    printf("Gantt Chart....\n\n");
    printf("|0|");
    for(lld i = 1; i < size; i++)
    {
        //sum += burst_time[i];
        for(lld j = 1; j <= (burst_time[i]-burst_time[i-1]); j++)
        {
            if( j == (burst_time[i]-burst_time[i-1])/2 )
                printf(".P%lld", i);
            else if(j == (burst_time[i]-burst_time[i-1]) )
            {
                if( (burst_time[i]-burst_time[i-1]) == 1)
                    printf("p%lld.|%lld|", i, burst_time[i]);
                else
                    printf("|%lld|", burst_time[i]);

            }
            else
                printf(".");
        }

    }
    printf("\n\n");

    lld waiting_time = 0;

    printf("Waiting Time....\n");
    for(lld i = 0; i < size-1; i++)
    {
        waiting_time += burst_time[i];
        printf("\tP%lld = %lld\n", i+1, burst_time[i]);
    }
    //cerr<<"SS: "<<size<<endl;

    cout<<"Average Waiting Time: "<<waiting_time<<"/"<<size-1<<" = "<< waiting_time/double(size-1)<<endl;


    lld tat = 0;
    printf("\n");
    printf("Turn Around Time....\n");
    for(lld i = 0; i<size-1; i++)
    {
        tat += burst_time[i+1];
        printf("\tP%lld = %lld\n", i+1, burst_time[i+1]);
    }
    cout<<"Average Turn Around Time: "<<tat<<"/"<<size-1<<" = "<< tat/double(size-1)<<endl;
}

int main()
{
    burst_time.push_back(0);

    printf("Enter burst time: \n");
    while(cin>>x)
    {
        burst_time.push_back(burst_time[i]+x);
        i++;
    }
    fcfs();

    return 0;
}
