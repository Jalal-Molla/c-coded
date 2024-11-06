#include <iostream>
#include <vector>
using namespace std;
class Dgraph{
private:
    int V;
    vector<int> *adj;
public:
    Dgraph(int V){
    this->V=V;
    adj=new vector<int>[V];
    }
    void addEge(int u, int v){
    adj[u].push_back(v);
    }
    void printDgraph(){
    for(int i=0;i<V;i++){
        cout<<" Node" << i <<"has to--";
        for(auto v:adj[i])
        cout<<v<<" ";
        cout<<endl;
    }
    }
};

int main()
{
    Dgraph g(5);

    g.addEge(0,1);
    g.addEge(0,2);
    g.addEge(2,3);
    g.addEge(1,4);
    g.addEge(3,4);

    g.printDgraph();
}
