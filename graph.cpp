#include <iostream>
#include <vector>
using namespace std;
class Graph{
private:
    int V;
    vector<vector<int>> adj;
public:
    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
    void printGraph(){
        for(int i=0;i<V;i++){
            cout<<"Node "<<i<<": ";
            for(int j:adj[i]){
            cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int V,E;
    cout<<"Enter the edge number your vertex: ";
    cin>>V;
    cout<<"Eneter the Edge number: ";
    cin>>E;
    Graph g(V);
    for(int i=0;i<E;i++){

        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);

    }
    g.printGraph();
}

