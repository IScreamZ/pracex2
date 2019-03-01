#include<iostream>
using namespace std;

template <typename T>
int countIf(T arr[],int length,T target){
	int ans;
	for(int x=0;x<length;x++){
		if(arr[x]==target) ans++; 
	}
	return ans;
}


int main(){
	int a[] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
