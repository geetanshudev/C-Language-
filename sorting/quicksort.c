#include<stdio.h>
void quickSort(int a[], int first, int last);
int pivot(int a[], int first, int last);
void swap(int& a, int& b);
Void main()
{
int test[] = { 7, -13, 1, 3, 10, 5, 2, 4 };
int N = sizeof(test)/sizeof(int); 
quickSort(test, 0, N-1);
}
void swap(int& a, int& b) {
int temp = a; 
a = b;
b = temp;
}
void quickSort( int a[], int first, int last) {
int pivotElement; 
if(first < last) {
pivotElement = pivot(a, first, last);
quickSort(a, first, pivotElement-1);
quickSort(a, pivotElement+1, last); }
}
int pivot(int a[], int first, int last){
int p = first;
int pivotElement = a[first];
for(int i = first+1 ; i <= last ; i++){
if(a[i] <= pivotElement){
p++;
swap(a[i], a[p]); 
}
}
swap(a[p], a[first]);
return p;
}
int pivot(int a[], int first, int last){
int p = first;
int pivotElement = a[first];
for(int i = first+1 ; i <= last ; i++){
if(a[i] <= pivotElement){
p++;
swap(a[i], a[p]); 
}
}
swap(a[p], a[first]);
return p;
}
