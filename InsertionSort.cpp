# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void InsertionSort(int a[],int n);
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
	InsertionSort(a,n);
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
void InsertionSort(int a[],int n){
	for(int j=1;j<=n-1;j++)
	{
		int temp=a[j];
		int i=j-1;
		
		while(a[i]>temp&&i>=0)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=temp;
	}
}












