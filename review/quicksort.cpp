//quick sort()

#include <iostream>
using namespace std;

void quickSort(int arr[], int size){
	int pivot = arr[0];
	int cursor = 0;

	for(int i = 1; i < size; i++){
		if(pivot > arr[i]){
			cursor += 1;
			swap(arr[cursor], arr[i]);
		}
	}

	swap(arr[0], arr[cursor]);

	if(cursor > 0){
		quickSort(arr, cursor);
	}
	if(cursor + 1 < size - 1){
		quickSort(arr + cursor + 1, size - cursor - 1);
	}
}

int main(){
	int arr[] = {9,8,7,4,2,6,1,3,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	quickSort(arr, size);

	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	retrun 0;
}