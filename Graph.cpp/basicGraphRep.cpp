#include<iostream>
#include<bits/stdc++.h>
using namespace  std  ;
int main(){
    // GRAPHJ using adjacency matrix 
    int n , m ; 
    cin >> n  >> m ;
    int adj[n+1][m+1];
    for(int i = 0 ; i < m  ; i++){
        int v , u ;
        cin >> u >> v ;
        adj[u][v] = 1 ;
        adj[v][u] = 1 ;
    }

    // using adjacency list
    vector<int>v;
}
