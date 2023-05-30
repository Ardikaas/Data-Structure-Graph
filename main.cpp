#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph {
  int numNodes;
  list<int> *adjList;

public:
  Graph(int numNodes) {
    this->numNodes = numNodes;
    adjList = new list<int>[numNodes];
  }

  void addEdge(int node1, int node2) {
    adjList[node1].push_back(node2);
    adjList[node2].push_back(node1);
  }
  void printGraph() {
    for (int i = 0; i < numNodes; ++i) {
      cout << "Node " << i << ": ";
      for (int node : adjList[i]) {
        cout << node << " ";
      }
      cout << endl;
    }
  }

  void BFS(int startNode){
    bool *visited = new bool[numNodes];
    for(int i = 0; i < numNodes; i++){
      visited[i] = false;
    }
    queue<int> q;
    visited[startNode] = true;
    q.push(startNode);

    while(!q.empty()){
      int currentNode = q.front();
      cout << currentNode << " ";
      q.pop();

      for(int neighbor : adjList[currentNode]){
        if (!visited[neighbor]){
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }
    delete[] visited;
  }
  
  void DFSUtil(int currentNode, bool visited[]) {
  visited[currentNode] = true;
  cout << currentNode << " ";
  for (int neighbor : adjList[currentNode]) {
    if (!visited[neighbor]) {
      DFSUtil(neighbor, visited);
      }
    }
  }

  void DFS(int startNode) {
    bool *visited = new bool[numNodes];
    for (int i = 0; i < numNodes; ++i) {
      visited[i] = false;
    }
    DFSUtil(startNode, visited);
    delete[] visited;
  }
};

int main(int argc, char const *argv[]){
  Graph graph(5);
  graph.addEdge(0, 1);
  graph.addEdge(0, 4);
  graph.addEdge(1, 2);
  graph.addEdge(1, 3);
  graph.addEdge(1, 4);
  graph.addEdge(2, 3);
  graph.addEdge(3, 4);
  graph.printGraph();
  return 0;
}
