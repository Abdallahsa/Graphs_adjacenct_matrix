#include <iostream>
#include<vector>
using namespace std;
struct Edge{
    int cost;
    int to;
};
typedef vector<vector<Edge>> Graphs;

void add_direct(vector<vector<Edge>>& Graph,int from,int to,int cost){
    Graph[from].push_back({to,cost});

}
void add_undirect(vector<vector<Edge>>& Graph,int from ,int to,int cost){
    Graph[from].push_back({cost,to});
    Graph[to].push_back({cost,from});

}
void print_dirct_graph(Graphs& graphs){
    int size=graphs.size();

    for (int from = 0; from < size; ++from) {
        cout<<"Node "<<from<<" has neighbors: ";
        for (int to = 0; to <(int)graphs[from].size(); ++to) {
          cout<<graphs[from][to].to<<" "<<"are weighted "<<graphs[from][to].cost;

        }
        cout<<endl;
    }
}

int main() {
    int node,edges;
    cin>>node>>edges;
 Graphs graphs(node);
 Edge  edge;
    for (int i = 0; i < edges; ++i) {
        int to,from,weighted;
        cin>>from>>to>>weighted;
        add_direct(graphs,from,to,weighted);
    }
    print_dirct_graph(graphs);
    return 0;
}
