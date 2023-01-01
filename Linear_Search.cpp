#include <bits/stdc++.h>

using namespace std;

bool linearSearch(vector<int> &arr,int n,int key){
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == key)
			return true;
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

	if(linearSearch(arr,n,key))
		cout << "Element is present";
	else
		cout << "Element is not present";

}