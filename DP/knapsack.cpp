#include<iostream>
using namespace std;

int maxProfit_knapsack(int * weight , int * value , int  n , int max_weight){
    if(n == 0 || max_weight == 0){
        return 0 ;
    }
    if(weight[n-1]> max_weight){
        return maxProfit_knapsack(weight , value , n-1 , max_weight);
    }
    int includeitem = value[n-1] + maxProfit_knapsack(weight , value , n-1 , max_weight - weight[n-1]);
    int excludeitem = maxProfit_knapsack(weight , value , n-1 , max_weight);
    return max(includeitem , excludeitem);
}

int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << maxProfit_knapsack(weights, values, n, maxWeight) << endl;
}