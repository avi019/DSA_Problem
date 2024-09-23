
#include <iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int main() {
   
vector<int>nums;
int n;
while(cin>>n)
{
   nums.push_back(n);
}
int s=nums.size();
for(auto it:nums)
{
   cout<<it<<" ";
}
cout<<" completed "<<endl;
cout<<s<<endl;

    return 0;
}