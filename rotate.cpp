#include <iostream>

using namespace std;

void rotate(int *arr,int arrsize,int rotate_pos)
{
	for(auto i=0;i<rotate_pos;i++){
		int first=arr[0];
		for(auto j=0;j<arrsize;j++){
			arr[j]=arr[j+1];
		}
		arr[arrsize-1]=first;
	}
}

void display(int *arr,int arrsize)
{
	for(auto i=0;i<arrsize;i++){
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=(sizeof(arr)/sizeof(arr[0]));
	cout<<"size of the arrary = "<<n<<endl;
	rotate(arr,n,3);  
	display(arr,n);

}
