#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,weight;
    bool operator<(Edge const& other){
    return weight<other.weight;
    }
};
//Disjoin set union-Find
struct DSU{
    vector<int> parent,rank;
    DSU(int n){
    parent.resize(n);
    rank.resize(n,0);
    for(int i=0;i<n;i++)
        parent[i]=i;
    }
    int find(int u){
    if(u==parent[u])
        return u;
    return parent[u]=find(parent[u]);
    }
    bool union_sets(int u, int v){
        u=find(u);
        v=find(v);
        if(u!=v){
            if(rank[u]<rank[v])
                swap(u,v);
            parent[v]=u;
            if(rank[u]==rank[v])
                rank[u]++;
            return true;
        }
        return false;
    }
};
int main(){
    int n,m;
    cout<<"Enter number of vertices and edges: ";
    cin>>n>>m;

    vector<Edge> edges(m);
    cout<<"Enter edges(u,v, weight):\n";
    for(int i=0;i<m;i++){
    cin>>edges[i].u>>edges[i].v>>edges[i].weight;
    }
    sort(edges.begin(),edges.end());
    DSU dsu(n);
    vector<Edge> result;
    int total_weight=0;
    for(Edge e:edges){
    if(dsu.union_sets(e.u,e.v)){
        result.push_back(e);
        total_weight +=e.weight;
        }
    }
    cout<<"Minimu spanning Tree weight: "<<total_weight<<"\n";
    cout<<"Edges in MST:\n";
    for(Edge e:result){
    cout<<e.u<<" - "<<e.v<<" (weight: "<<e.weight<<")\n";
    }

}
