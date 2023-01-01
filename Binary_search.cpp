#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr,int n,int key){
	int l = 0 , r = n-1;

	while(l<=r){
		int mid = l + (r-l)/2;

		if(arr[mid] == key)
			return true;
		else if(arr[mid] < key)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return false;
}

int main(){
	int n,key;
	vector<int> arr;

	cout <<"Enter number of inputs: ";
	cin >> n;

	cout <<"Enter Elements: \n";
	for(int i = 0 ; i < n ; i++){		int x;
		cin >> x;
		arr.push_back(x);
	}

	cout <<"Enter Element to be searched: ";
	cin>>key;

	if(binarySearch(arr,n,key))
		cout << "Element is present";
	else
		cout << "Element is not present";

}