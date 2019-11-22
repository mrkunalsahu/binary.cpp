#include<iostream>
using namespace std;
void bin(int[],int,int);
void search(int[],int,int);
int main()
{
    int arr[100],n,e;


    cout<<"Please Enter the size of the array (max 100) :";
    cin>>n;
    cout<<"Please Enter all "<<n<<" elements: ";

    for (int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<"\nArray is : ";
    for (int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }


cout<<"\nPlease Enter the element to be searched for : ";
cin>>e;
 search(arr,n,e);



    return 0;
}



void search(int arr[],int n,int e)
{
cout<<"in function";
int s,l,mid,flag=0;
s=0;
l=n-1;
mid=(s+l)/2;


while(s<=l)
{


if(arr[mid]==e)
{
    cout<<"\nElement Found at location "<<e+1;


}

if(e<arr[mid])
{
    l=mid-1;
}

if(e>arr[mid])
{
    s=mid+1;
}

mid=(s+l)/2;


}


}
