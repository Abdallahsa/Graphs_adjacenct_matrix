#include <iostream>
#include<vector>
using namespace std;
typedef vector<vector<int>> Graphs;
void add_undirect(vector<vector<int>>& Graph,int from ,int to){
        Graph[from][to]+=1;
        Graph[to][from]+=1;
    }
void add_direct(vector<vector<int>>& Graph,int from ,int to){
    Graph[from][to]+=1;

}
void priint_dirct_graph(Graphs& graphs){
    int size=graphs.size();
    for (int from = 0; from < size; ++from) {
        for (int to = 0; to < size; ++to) {
            if(graphs[from][to]>0){
                cout<<"form "<<from<<" "<<"to "<<to
                <<" "<<" are "<<graphs[from][to]<<endl;
            }
        }
    }
}

int main() {
    int node,edges;
    cin>>node>>edges;
 Graphs graphs(node,vector<int>(node));
    for (int i = 0; i < edges; ++i) {
        int to,from;
        cin>>from>>to;
        add_direct(graphs,from,to);
    }
    priint_dirct_graph(graphs);
    return 0;
}
