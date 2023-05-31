# Data Structure : Graph
A graph data structure is a collection of nodes (also known as vertices) that are interconnected by edges. It is a fundamental data structure used to represent relationships or connections between various entities. Graphs are widely used in computer science and real-world applications to model and solve a variety of problems.

In a graph, nodes represent individual entities, and edges represent the relationships or connections between those entities. The edges can be either directed or undirected. In a directed graph, the edges have a specific direction associated with them, indicating a one-way relationship. In an undirected graph, the edges do not have any specific direction, and the relationships are bidirectional.

Graphs can be classified based on their properties and characteristics:
- `Weighted vs. Unweighted` : In a weighted graph, each edge has an associated weight or cost, representing the strength or distance of the relationship. In an unweighted graph, the edges do not have weights.
- `Cyclic vs. Acyclic` : A cyclic graph contains at least one cycle, which is a path that starts and ends at the same node. An acyclic graph, also known as a directed acyclic graph (DAG), does not contain any cycles.
- `Connected vs. Disconnected` : A connected graph has a path between every pair of nodes, allowing traversal from any node to any other node. A disconnected graph consists of multiple separate components, where there is no path between some pairs of nodes.

Graphs can be represented using various data structures, such as an adjacency matrix or an adjacency list. An adjacency matrix is a two-dimensional array where each cell indicates whether an edge exists between two nodes. An adjacency list is a collection of lists or arrays where each node is associated with a list of its neighboring nodes.

Graphs can be represented using various data structures, such as an adjacency matrix or an adjacency list. An adjacency matrix is a two-dimensional array where each cell indicates whether an edge exists between two nodes. An adjacency list is a collection of lists or arrays where each node is associated with a list of its neighboring nodes.

# BFS & DFS
Breadth-First Search (BFS) and Depth-First Search (DFS) are two common graph traversal algorithms used to explore or search through the nodes of a graph. Both algorithms visit nodes in a specific order and can be used to solve various graph-related problems.

## BFS
- `Strategy` : BFS explores the graph in a breadth-first manner, starting from a given source node and systematically exploring all its neighbors before moving on to the next level of neighbors.
- `Queue-based Approach` : BFS uses a queue data structure to maintain the order of nodes to be visited. The source node is initially enqueued, and then while the queue is not empty, nodes are dequeued one by one and their neighbors are enqueued.
- `Level-by-Level Exploration` : BFS guarantees that nodes are visited level by level, meaning all nodes at the current level are visited before moving on to the nodes at the next level.
- `Applications` : BFS is often used to find the shortest path between two nodes, solve problems requiring level-wise exploration, or explore graphs with uniform or weighted edges.

## DFS
- `Strategy` : DFS explores the graph in a depth-first manner, starting from a given source node and traversing as far as possible along each branch before backtracking.
- `Stack-based Approach` : DFS uses a stack data structure to maintain the order of nodes to be visited. The source node is initially pushed onto the stack, and then while the stack is not empty, nodes are popped one by one, their unvisited neighbors are pushed onto the stack, and the process continues.
- `Deep Exploration` : DFS explores the graph deeply along a path until it reaches a leaf node or a node with no unvisited neighbors, and then backtracks to the previous node and explores other paths.
- `Applications` : DFS is often used to detect cycles in a graph, explore all possible paths in a graph, or search for specific elements in a graph.

The choice between BFS and DFS depends on the specific problem at hand and the nature of the graph. BFS is typically useful for finding shortest paths, exploring graphs in a level-wise manner, or when the goal is to cover the graph uniformly. DFS, on the other hand, is commonly used for detecting cycles, exploring paths deeply, or when backtracking is required.
