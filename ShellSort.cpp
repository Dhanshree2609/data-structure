# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void ShellSort(int a[],int n);
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
	cout<<endl;
	ShellSort(a,n);
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
void ShellSort(int a[],int n){
	int gap=n/2;
	while(gap>0)
	{
		for(int i=gap;i<=n-1;i++){
			int temp=a[i],j=i;
			while(j>=gap&&a[j-gap]>temp)
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
}












