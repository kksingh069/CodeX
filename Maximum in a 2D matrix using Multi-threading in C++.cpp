// CPP code to find max in 2d 
// array using multi-threading 
#include <bits/stdc++.h> 
using namespace std; 

// declaring two thread_id variable 
pthread_t thread[2]; 

// structure for passing arguments 
typedef struct dim 
{ 
	int s, e; 
}dim; 

// matrix of 4X4 
int mat1[][4] = {{1, 5, 3, 6}, {22, 80, 4, 34}, 
			{4, 45, 67, 3}, {99, 3, 23, 3}}; 
int maxf[2]; 

// function that find max from a given array 
void *max(void *size) 
{ 
	int i, j, max; 
	dim *b = (dim *)size; 
	max = mat1[b -> s][0]; 
	
	// finding max 
	for(i = b -> s; i < b -> e; i++) 
	{ 
		for(j = 0; j < 4; j++) 
		{ 
			if(max < mat1[i][j]) 
				max = mat1[i][j]; 
		} 
	} 
	
	// storing max from first half of 
	// 2-d array into 0th index 
	if(b -> s == 0) 
		maxf[0] = max; 
	
	// storing max from second half of 
	// 2-d array into 1st index 
	else
	maxf[1] = max; 
} 

// driver function 
int main() 
{ 
	int i, j; 
	dim *a, *b; 
	a = (dim *)malloc(sizeof(dim)); 
	b = (dim *)malloc(sizeof(dim)); 
	
	// creating thread1 
	a -> s = 0; a -> e = 4/2; 
	pthread_create(&thread[0], NULL, 
				&max, (void *)a); 
	
	b -> s = 4/2; b -> e = 4; 
	
	// creating thread 2 
	pthread_create(&thread[1], NULL, 
				&max, (void *)b); 
	
	// waiting until the completion of threads 
	pthread_join(thread[0], NULL); 
	pthread_join(thread[1], NULL); 
	
	// printing max 
	if(maxf[0] > maxf[1]) 
	cout << maxf[0] << endl; 
	else
	cout<< maxf[1] << endl; 
	
	return 0; 
} 
