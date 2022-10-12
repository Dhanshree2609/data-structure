# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void SmartBubbleSort(int a[],int n);
void Swap(int &x,int &y);
int main()
{
	int n;
	cout<<"Enter the array size"<<endl; cin>>n;
	int a[n];
	cout<<"Enter the array elements"<<endl;
	fillarray(a,n);
	cout<<"The unsorted array is "<<endl;
	displayarray(a,n);
	cout<<"Calling function for sorting"<<endl;
	SmartBubbleSort(a,n);
	cout<<"The sorted array is "<<endl;
	displayarray(a,n);
}

void fillarray(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	cin>>a[i];
}

void displayarray(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	cout<<a[i]<<" ";
}
void Swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void SmartBubbleSort(int a[],int n){
	for(int p=0;p<=n-2;p++)
	{
		int s=0;
		for(int c=0;c<=n-p-2;c++)
		{
			if(a[c]>a[c+1])
			{
			Swap(a[c],a[c+1]);
			s=1;
		    }
		}
		if(s==0) break;
	}
}












