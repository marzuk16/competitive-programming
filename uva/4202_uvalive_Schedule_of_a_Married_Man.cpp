#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        int startHour, startMinute, endHour, endMinute;

        scanf("%d:%d %d:%d", &startHour, &startMinute, &endHour, &endMinute);

        startHour = startHour*60 + startMinute;
        endHour = endHour*60 + endMinute;

        int meetingHour, meetingMinute, endMeetingHour, endMeetingMinute;

        scanf("%d:%d %d:%d", &meetingHour, &meetingMinute, &endMeetingHour, &endMeetingMinute);

        meetingHour = meetingHour*60 + meetingMinute;
        endMeetingHour = endMeetingHour*60 + endMeetingMinute;

        printf("Case %d: ", T);
        if(endHour < meetingHour || startHour > endMeetingHour)
            printf("Hits Meeting\n");
        else
            printf("Mrs Meeting\n");
    }

    return 0;
}