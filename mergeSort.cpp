
#include<iostream>
using namespace std;
#include<vector>

class Sort
{

    public:
    void merge(int l,int mid,int h,vector<int>&nums)
    {
        vector<int>temp;
        int j=mid+1;
        int i=l;
        while(i<=mid && j<=h)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else{
               temp.push_back(nums[j]);
                j++; 
            }
            
        }
        
        while(i<=mid)
            {
                 temp.push_back(nums[i]);
                i++;
                
            }
            while(j<=h)
            {
                 temp.push_back(nums[j]);
                j++;
            }

        for(int i=l;i<=h;i++)
        {
            nums[i]=temp[i-l];
        }
    }
    void mergeSort(int l ,int h,vector<int>&nums)
    {
        if(l>=h)
        return ;

        int mid=l+(h-l)/2;

        mergeSort(l,mid,nums);
        mergeSort(mid+1,h,nums);
        merge(l,mid,h,nums);

    }



};
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    Sort obj;

    cout<<"Befor sorting -> ";
     for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    obj.mergeSort(0,n-1,nums);

     cout<<"After sorting -> ";
     for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}