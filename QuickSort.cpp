#include <stdlib.h>
# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int Partition(int a[],int  L,int R);
void QuickSort(int a[],int L,int R);
void swap(int &x,int &y);
int main(){
 	int n;
 	cout<<"How many random elements you want in your array";
 	cin>>n;
 	int a[n];
 	fillarray(a,n);
 	cout<<"\n********************************\n Before Sorting\n";
 	displayarray(a,n);
 	cout<<"\n********************************\n ";
 	QuickSort(a,0,n-1);
 	cout<<"\n********************************\n After Sorting\n";
 	displayarray(a,n);
 	cout<<"\n*********************************\n";
    return 0; 	
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
  
  void swap(int &x,int &y)
  {
  	int t=x;
  	x=y;
  	y=t;
  }
  
  void QuickSort(int a[],int L,int R)
  {
  	if(L<R)
  	{
  	 int pos=Partition(a,L,R);
	   QuickSort(a,L,pos-1);
	   QuickSort(a,pos+1,R);	
	}
  }
  
  int Partition(int a[],int L,int R)
  {
  	int i=L-1,pivot=a[R];
  	for(int j=L;j<=R-1;j++)
  	{
  	if(a[j]<pivot)
	  swap(a[++i],a[j]);	
	}
	swap(a[++i],a[R]);
	return i;
  }
