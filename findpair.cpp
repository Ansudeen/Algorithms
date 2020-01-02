#include <iostream>
#include <set>

using namespace std;

bool findpair(int *arr, int key, int arrsize)
{
	set<int> s;
	int pos=0;

	for(auto i=0;i<arrsize;i++){
		if(s.find(key-arr[i])!=s.end()){
			cout<<"second pair found  at :: "<<i<<endl;
			return true;
		}
			
		s.insert(arr[i]);		
	}
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=(sizeof(arr)/sizeof(arr[0]));
	cout<<"size of the arrary = "<<n<<endl;
	cout<<findpair(arr,10,n)<<endl;
}
