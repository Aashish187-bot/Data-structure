//Title :Linear search
//PRN no. 124B1F112
//Class : IT B(S.Y) 
#include<iostream>
using namespace std;
int main()
{
	int arr[]={9,6,5,1,4,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
			
			swap(arr[i],arr[j]);
			}
		}
	}
	cout<<"Sorted Array :\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i] <<"\n";
	}
	
}
/*output:
Sorted Array :
1
4
5
6
7
9
*/
