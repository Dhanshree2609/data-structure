#include <stdlib.h>
# include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void Merge(int a[],int  L,int mid,int R);
void MergeSort(int a[],int L,int R);
 int main(){
 	int n;
 	cout<<"How many random elements you want in your array";
 	cin>>n;
 	int a[n];
 	fillarray(a,n);
 	cout<<"\n********************************\n Before Sorting\n";
 	displayarray(a,n);
 	cout<<"\n********************************\n ";
 	MergeSort(a,0,n-1);
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
  
  void MergeSort(int a[],int L,int R)
  {
  	if(L<R)
  	{
  		int mid=(L+R)/2;
  		cout<<mid;
  		MergeSort(a,L,mid);
  		MergeSort(a,mid+1,R);
  		Merge(a,L,mid,R);
	}
  }
  
  void Merge(int a[],int L,int mid,int R)
  {
  	int n1=mid-L+1;
  	int n2=R-mid;
  	int left[n1+1],right[n2+1];
  	for(int i=0;i<n1;i++)
  	  left[i]=a[L+i];
  	for(int i=0;i<n2;i++)
  	  right[i]=a[mid+1+i];
  	left[n1]=INT_MAX;
  	right[n2]=INT_MAX;
  	int i=0,j=0;
  	for(int k=L;k<=R;k++)
  	{
  		if(left[i]<=right[j])
  		  a[k]=left[i++];
  		else 
		  a[k]=right[j++];
	}
  }
