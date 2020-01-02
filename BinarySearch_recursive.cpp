#include <iostream>
using namespace std;

bool search(int arr[],int first,int last, int key) {

	int mid=(first+last)/2;
	
	if(arr[mid]==key)
		return true;
	else if(arr[mid]>key){
		search(arr,first,mid-1,key);
	}
	else
		search(arr,mid+1,last,key);
		

}

int main()
{
	int x[5] = { 1, 2, 3, 4, 5};
	if (search(x,0,4,1))
	{
		cout << "key found" << endl;
	}
	else
		cout << "key not found!!!" << endl;
}
