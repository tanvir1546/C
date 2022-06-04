/* ******************Insertion_sort******************** */
/* C implementation of insertion sort 
 * ファイル名：insertion_sort.c        Path: ~/sorting_algo/insertion_sort.c
 * AUTHOR: geeksforgeeks
 * Edited By: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */

/* efficient for small dataset and already sorted array
 * iterate from arr[1] to arr [n] 
 * key=arr[1] and compare previous arr and replace value
 * finally put value a[j+1] = key
 * time_complexity: O(N^2)
 * takes maximum time if elements are sorted in reverse order. 
 * takes minimum time if elemnets are sorted already.
 */

#include <stdio.h>
void insertion_sort(int arr[], int n){
	int i,key,j; 
	for(i=1; i<n; i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void print_arr(int arr[], int n){
	int k; 
	for(k = 0; k < n; k++){
	printf("%d\t", arr[k]); 
	}
}
int main(){
	int arr[]={8,2,4,1,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	printf("UNSORTED ARRAY>\n");
	print_arr(arr,n);
	insertion_sort(arr,n);
	printf("\nSORTED ARRAY>\n");
	print_arr(arr,n);
return 0; 
}