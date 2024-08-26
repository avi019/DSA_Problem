#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
void heapify(int i,vector<int>&nums,int &n)
{
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<=n && nums[smallest]>nums[left])
    {
        smallest=left;
    }
    if(right<=n && nums[smallest]>nums[right])
    {
        smallest=right;
    }
    if(i!=smallest)
    {
        swap(nums[smallest],nums[i]);
        heapify(smallest,nums,n);
    }
    return ;                     
}
void heapsort(vector<int>&nums,int n)
{
    int size=n;
    while(size>=0)
    {
        swap(nums[size],nums[0]);

        size--;

        heapify(0,nums,size);
    }


}
int main()
{
    vector<int>nums={8,7,6,5,9,10,11};
    int n=nums.size();
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(i,nums,n);
    }
    cout<<"after building minheap tree"<<endl;
    for(auto it:nums)
    {
        cout<<it<<" ";

    }
    heapsort(nums,n-1);
    cout<<endl<<"after sorting "<<endl;
    reverse(nums.begin(),nums.end());
     for(auto it:nums)
    {
        cout<<it<<" ";

    }
    cout<<endl;

}