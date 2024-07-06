#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap()
    {
        arr[0]=-1;
        size=0;

    }

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent=index/2;

            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;

            }
            else
            return ;//last me pahuch gye ,everything is fine now 
        }

    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }


void deletefromheap()
{
    if(size==0)
    {
        cout<<"nothing to delete "<<endl;
        return;  
    }
    //step1: put last element into first index
    arr[1]=arr[size];
    //step 2: remove last elemnt
    size--;
    //step 3: take root node to its correct position 
    int i=1;
    while(i<size)
{
    int leftindex=i*2;
    int rightindex=1*2+1;
    if(leftindex<size && arr[i]<arr[leftindex])
    {
        swap(arr[i],arr[leftindex]);
        i=leftindex;
    }
    else if(rightindex<size && arr[i]<arr[rightindex])
    {
        swap(arr[i],arr[rightindex]);
        i=rightindex;
    }
    else
    return ;
}
}
};
void heapify(int arr[],int n,int i)
{
    int largest =i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    return ;
}

//heap sort
void heapsort(int arr[],int n)//time complexity : O(nlogn)
{
    int size=n;
    while(size>1)
    {
        //step 1: swap
        swap(arr[size],arr[1]);
        //step 2:
        size--;
        //step 3: heapify 
        heapify(arr,size,1); 

    }
}

int main()
{
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // cout<<"after delete"<<endl;
    // h.deletefromheap();
    // h.print();


    cout<<"heapify algorithm"<<endl;

    int nums[6]={-1,54,53,55,52,50};
    int n=5;

    //heap creation
    for(int i=n/2;i>0;i--)
    {
        heapify(nums,n,i);
    }
    cout<<"after heapifying printing the array : ";
    for(int i=1;i<=n;i++)
    {
        cout<<nums[i]<<" ";

    }cout<<endl;

    heapsort(nums,n);

     cout<<"after sorting printing the array : ";
    for(int i=1;i<=n;i++)
    {
        cout<<nums[i]<<" ";

    }cout<<endl;








    return 0;
}