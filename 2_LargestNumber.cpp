# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int Largest(int a[],int n);

int main()
{
	int n;
	cout<<"Enter the number of elements in array "<<endl; cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"The given array is "<<endl;
	displayarray(a,n);
	int max=Largest(a,n);
	cout<<endl;n
	cout<<"The largest number is "<<max;
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

int Largest(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<=n-1;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
