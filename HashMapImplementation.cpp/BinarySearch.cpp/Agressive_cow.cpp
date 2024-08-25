#include <iostream>
using namespace std;


#include<vector>
int barnposition(int maxdistance,vector<int>&nums,int cow)
{
    int lastposition=nums[0];
    cow--;
    for(int i=1;i<nums.size();i++)
    {
        int diff=nums[i]-lastposition;
        if(diff>=maxdistance)
        {
            cow--;
            lastposition=nums[i];
            if(cow<0)
            break;
        }

    }
    return cow;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,cow;
        cin>>n>>cow;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int l=1;
        int h=nums[n-1]-nums[0];
        int ans;
        while(l<=h)
        {
            int maxdistance=l+(h-l)/2;
            int remaning_cow=barnposition(maxdistance,nums,cow);
            if(remaning_cow<=0)
            {
                l=maxdistance+1;
                ans=maxdistance;
            }
            else
            {
                h=maxdistance-1;
            }
        }
        cout<<ans<<endl;

        
    }
    return 0;
 
}