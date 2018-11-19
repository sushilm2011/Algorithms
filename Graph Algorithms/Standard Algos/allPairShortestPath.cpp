#include<iostream>
using namespace std;

class Graph{
    int **graph;
    int V;
public:
    Graph(int V){
        this->V = V;
        graph = new int*[V];
        for(int i=0;i<V;i++){
            graph[i]= new int[V];
        }
    }
    
    Graph(const Graph &g){
        V = g.V;
        graph = new int*[V];
        for(int i=0;i<V;i++){
            graph[i]= new int[V];
        }
        
        //Bad Idea
        //new (this) Graph(V);
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                graph[i][j] = g.graph[i][j];
            }
        }
    }
    
    void addEdge(int i, int j, int weight){
        graph[i][j]=weight;
    }
    
    
    //Returns modified graph with all pair shortest path
    Graph allPairShortestPath(){
        Graph g(*this);
        
        for(int middle = 0; middle<V; middle++){
            for(int start = 0; start<V; start++){
                for(int end = 0; end<V; end++){
                    if(g.graph[start][middle] + g.graph[middle][end] < g.graph[start][end]){
                        g.graph[start][end] = g.graph[start][middle] + g.graph[middle][end];
                    }
                }
            }
        }
        
        return g;
    }
    
    void print(){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                cout<<graph[i][j]<<" ";
            }
        }
    }
};

int main(){
    int T;
    cin>>T;
    while(T--){
        int V;
        cin>>V;
        Graph g(V);
        for(int i=0;i<V;i++){
            for(int j=0,wt;j<V;j++){
                cin>>wt;
                g.addEdge(i,j,wt);
            }
        }
        
        Graph result = g.allPairShortestPath();
        result.print();
        cout<<endl;
    }
	
	return 0;
}
