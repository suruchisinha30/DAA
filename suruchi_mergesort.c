#include<stdio.h>
#include<conio.h>

void main(){
	void print(int[],int);
	int merge_sort (int[],int,int);
	void merge(int[],int,int,int);
	 int n,i,count=0,arr[100];
	 clrscr();

	printf("\nEnter the number of element you want to enter");
	 scanf("%d",&n);
	count++;

    printf("\n Enter element in array:-\n");
	for(i=0;i<n;i++){
	count++;
	scanf("%d",&arr[i]);

	}


int count1=  merge_sort (arr,0,n);
print(arr,n);

int sum=count+count1;
printf ("\n The Counting value is :- %d",sum);
}

void merge(int arr[], int p, int m, int r){
     //	int count=0;
	int i, j, k;
	int n1 = m - p+ 1;
	int n2 = r - m;


	int L[50], R[50];

	for (i = 0; i < n1; i++){
       //		count++;
		L[i] = arr[p + i];
	     }
	for (j = 0; j < n2; j++)  {
	 //	count++;
		R[j] = arr[m + 1+ j];
	     }

i = 0;
j = 0;
k = p;
while (i < n1 && j < n2){
      //	count++;
	if (L[i] <= R[j]){
		arr[k] = L[i];
		i++;
	}
	else{
		arr[k] = R[j];
		j++;
	}
	k++;
}

while (i < n1){
	//count++;
	arr[k] = L[i];
	i++;
	k++;
}

while (j < n2){
       //	count++;
	arr[k] = R[j];
	j++;
	k++;
}

}




  int merge_sort(int arr[], int p, int r)
{    int count=0;
if (p < r)
{

int m = p+(r-p)/2;
count++;

merge_sort(arr, p, m);
count++;
merge_sort(arr, m+1, r);


count++;
merge(arr, p, m, r);
}
return count;
}
void print(int arr[],int n){

	int i;
	for(i=0;i<n;i++){
		printf("%d->",arr[i]);
	}
}