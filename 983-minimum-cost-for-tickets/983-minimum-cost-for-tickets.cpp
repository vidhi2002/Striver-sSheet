class Solution {
public:
    bool willtravel(int day,vector<int> days)
    {
        for(int i=0;i<days.size();i++)
        {
            if(days[i]==day)
                return true;
            if(days[i]>day)
                return false;
        }
        return false;
    }
    int find(int day,vector<int>& days,vector<int>& cost,vector<int>& t)
    {
        if(day>days[days.size()-1])
            return t[day]=0;
        if(t[day]!=-1)
            return t[day];
        int ans=INT_MAX;
        if(willtravel(day,days))
        {
            ans=min(ans,find(day+1,days,cost,t)+cost[0]);
            ans=min(ans,find(day+7,days,cost,t)+cost[1]);
            ans=min(ans,find(day+30,days,cost,t)+cost[2]);
        }
        else
            return t[day]=find(day+1,days,cost,t);
        return t[day]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> t(400,-1);
        return find(days[0],days,costs,t);
    }
};