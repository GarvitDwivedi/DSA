#include<iostream>
using namespace std ;
#include <bits/stdc++.h>

int minCostPathHElper(int **arr , int m , int n , int i , int j ){
	if(i == m-1 && j == n-1){
		return arr[i][j];
	}
	if(i >= m || j >= n){
		return INT_MAX;
	}
	int x = minCostPathHElper(arr , m , n , i+1 , j);
	int y = minCostPathHElper(arr , m , n , i , j+1);
	int z = minCostPathHElper(arr , m , n , i+1 , j+1);

	int result = min(x , min(y,z)) + arr[i][j];
	return result ;
}
int minCostPath(int **arr , int m , int n){
    return minCostPathHElper(arr , m , n , 0 , 0);

}

int mincostpath2(int **arr , int m , int n , int  i , int j  , int **result){
	if(i == m-1 && j == n-1){
		return arr[i][j];
	}
	if(i >= m || j >= n){
		return INT_MAX;
	}
	if(result[i][j] != -1){
		return result[i][j];
	}
	int x = mincostpath2(arr , m , n , i+1 , j , result);
	int y = mincostpath2(arr , m , n , i+1 , j+1 , result);
	int z = mincostpath2(arr , m , n , i , j+1 , result);

	int ans = min(x , min(y , z)) + arr[i][j];
	result[i][j] = ans ;
	return ans ;

}

int mincost3(int ** arr ,int m ,int n ,int i ,int  j){
	int ** output = new int*[n+1];
	
}







 int main() {
	int m, n;
	cin >> m >> n;
	int **input = new int*[m];
	for(int i = 0; i < m; i++) {
		input[i] = new int[n];
		for(int j = 0; j < n; j++) {
			cin >> input[i][j];
		}	
	}
	 int **output = new int*[m];
    for(int i = 0; i < m; i++) {
        output[i] = new int[n];
        for(int j = 0; j < n; j++) {
            output[i][j] = -1;
        }
    }
	//cout << minCostPath(input, m, n) << endl;  RECURSIVE APPROACH
	cout << mincostpath2(input , m , n , 0 , 0 , output); 


}