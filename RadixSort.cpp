# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void CountSort(int a[],int n,int digit);
void RadixSort(int a[],int n);
int FindMax(int a[],int n);
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
	RadixSort(a,n);
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

int FindMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]>=max)
		max=a[i];
	}
	return max;
}

void CountSort(int a[],int n,int digit){
    int count[10]={0};
    int output[n];
    
    for(int i=0;i<=n-1;i++)
    count[(a[i]/digit)%10]++;
    
    for(int i=1;i<=9;i++)
    count[i]=count[i]+count[i-1];
    
    for(int i=n-1;i>=0;--i)
    output[--count[(a[i]/digit)%10]]=a[i];
    
    cout<<"After sorting"<<endl;
    displayarray(output,n);
    
    for(int i=0;i<=n-1;i++)
    a[i]=output[i];
}

void RadixSort(int a[],int n)
{
	int max=FindMax(a,n);
	int digit =1;
	while(max>0)
	{
		CountSort(a,n,digit);
		max=max/10;
		digit=digit*10;
	}
}











