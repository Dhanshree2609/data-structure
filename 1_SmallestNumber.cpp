# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int Smallest(int a[],int n);

int main()
{
	int n;
	cout<<"Enter the number of elements in the array"<<endl; cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"The given array is "<<endl;
	displayarray(a,n);
	int min=Smallest(a,n);
	cout<<endl;
	cout<<"Smallest number is "<<min;
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

int Smallest(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<=n-1;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	return min;
}









