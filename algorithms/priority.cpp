#include<bits/stdc++.h>
using namespace std;

#define lld long long int

struct info{
    string process;
    lld burst,priority;

};

bool operator < (info a, info b)
{
    if(a.priority > b.priority)
        return a.priority < b.priority;
}

vector< info >burst_time;
lld x,sum = 0, i = 0, size;

void solve()
{
    sort(burst_time.begin()+1, burst_time.end());

    for(int i=1; i<burst_time.size(); i++)
        burst_time[i].burst += burst_time[i-1].burst;

    lld size = burst_time.size();

    printf("Gantt Chart....\n\n");
    printf("|0|");
    for(lld i = 1; i < size; i++)
    {
        //sum += burst_time[i];
        for(lld j = 1; j <= (burst_time[i].burst-burst_time[i-1].burst); j++)
        {
            if( j == (burst_time[i].burst-burst_time[i-1].burst)/2 )
                cout<<"."<<burst_time[i].process;
            else if(j == (burst_time[i].burst-burst_time[i-1].burst) )
            {
                    if((burst_time[i].burst-burst_time[i-1].burst)==1)
                        cout<<burst_time[i].process<<".|"<<burst_time[i].burst<<"|";
                    else
                        printf("|%lld|", burst_time[i].burst);
            }
            else
                printf(".");
        }

    }
    printf("\n\n");

    lld waiting_time = 0;

    printf("Waiting Time....\n");
    for(lld i = 1; i < size; i++)
    {
        waiting_time += burst_time[i-1].burst;
        cout<<"\t"<<burst_time[i].process<<" = "<<burst_time[i-1].burst<<endl;
        //printf("\tP%lld = %lld\n", i+1, burst_time[i].burst);
    }
    //cerr<<"SS: "<<size<<endl;

    cout<<"Average Waiting Time: "<<waiting_time<<"/"<<size-1<<" = "<< waiting_time/double(size-1)<<endl;


    lld tat = 0;
    printf("\n");
    printf("Turn Around Time....\n");
    for(lld i = 0; i<size-1; i++)
    {
        tat += burst_time[i+1].burst;
        cout<<"\t"<<burst_time[i+1].process<<" = "<<burst_time[i+1].burst<<endl;
        //printf("\tP%lld = %lld\n", i+1, burst_time[i+1].burst);
    }
    cout<<"Average Turn Around Time: "<<tat<<"/"<<size-1<<" = "<< tat/double(size-1)<<endl;
}

void preemptive()
{
    cerr<<"!!!!!!!!!!!!!!"<<endl;


}


int main()
{
    info obj;
    obj.burst = 0;
    burst_time.push_back(obj);

    printf("Enter Process, burst time, priority: \n");
    while(cin>>obj.process>>obj.burst>>obj.priority)
        burst_time.push_back(obj);

    //sort(burst_time.begin()+1, burst_time.end());

//    for(int i=1; i<burst_time.size(); i++)
//        cout<<burst_time[i].process<<" "<<burst_time[i].arrival<<" "<<burst_time[i].burst<<endl;
//    for(int i=1; i<burst_time.size(); i++)
//    {
//        burst_time[i].burst += burst_time[i-1].burst;
//    }

    solve();

    return 0;
}



