# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void SelectionSort(int a[],int n);
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
	SelectionSort(a,n);
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
void SelectionSort(int a[],int n){
	for(int i=0;i<=n-2;i++)
	{
		int min=i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(min!=i)
		Swap(a[i],a[min]);
	}
}












