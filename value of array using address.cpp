#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5] = {10,20,30,40,50};
	for(int i=0; i<5; i++){
		cout << *(arr+i) << endl;	// it will give the value.
	}	
	
	cout << arr << endl;
	cout << &arr[0] << endl;	//both gives the same address.
    return 0; 
}
