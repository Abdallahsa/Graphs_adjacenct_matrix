#include <iostream>
#include<vector>
using namespace std;
typedef vector<vector<int>> Graphs;

void add_direct(vector<vector<int>>& Graph,int from ,int to){
    Graph[from].push_back(to);

}
void add_undirect(vector<vector<int>>& Graph,int from ,int to){
    Graph[from].push_back(to);
    Graph[to].push_back(from);

}
void print_dirct_graph(Graphs& graphs){
    int size=graphs.size();
    for (int from = 0; from < size; ++from) {
        cout<<"Node "<<from<<" has neighbors: ";
        for (int to = 0; to <(int)graphs[from].size(); ++to) {
          cout<<graphs[from][to]<<" ";

        }
        cout<<endl;
    }
}

int main() {
    int node,edges;
    cin>>node>>edges;
 Graphs graphs(node);
    for (int i = 0; i < edges; ++i) {
        int to,from;
        cin>>from>>to;
        add_direct(graphs,from,to);
    }
    print_dirct_graph(graphs);
    return 0;
}
