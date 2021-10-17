
Related Articles
▲
Related Articles
Rat in a Maze | Backtracking-2
Count number of ways to reach destination in a Maze
Count all possible paths from top left to bottom right of a mXn matrix
Print all possible paths from top left to bottom right of a mXn matrix
Unique paths in a Grid with Obstacles
Unique paths covering every non-obstacle block exactly once in a grid
Depth First Search or DFS for a Graph
Breadth First Search or BFS for a Graph
Level Order Binary Tree Traversal
Tree Traversals (Inorder, Preorder and Postorder)
Inorder Tree Traversal without Recursion
Inorder Tree Traversal without recursion and without stack!
Print Postorder traversal from given Inorder and Preorder traversals
Construct Tree from given Inorder and Preorder traversals
Construct a Binary Tree from Postorder and Inorder
Construct Full Binary Tree from given preorder and postorder traversals
N Queen Problem | Backtracking-3
Printing all solutions in N-Queen Problem
Warnsdorff’s algorithm for Knight’s tour problem
The Knight’s tour problem | Backtracking-1
Dijkstra's shortest path algorithm | Greedy Algo-7
Graph and its representations
Prim’s Minimum Spanning Tree (MST) | Greedy Algo-5
Kruskal’s Minimum Spanning Tree Algorithm | Greedy Algo-2
Topological Sorting
Detect Cycle in a Directed Graph
Bellman–Ford Algorithm | DP-23
Floyd Warshall Algorithm | DP-16

Depth First Search or DFS for a Graph
Difficulty Level : Easy
Last Updated : 26 Aug, 2021
 
Depth First Traversal (or Search) for a graph is similar to Depth First Traversal of a tree. The only catch here is, unlike trees, graphs may contain cycles, a node may be visited twice. To avoid processing a node more than once, use a boolean visited array. 

Example: 

Attention reader! Don’t stop learning now. Get hold of all the important DSA concepts with the DSA Self Paced Course at a student-friendly price and become industry ready.  To complete your preparation from learning a language to DS Algo and many more,  please refer Complete Interview Preparation Course.

In case you wish to attend live classes with experts, please refer DSA Live Classes for Working Professionals and Competitive Programming Live for Students.

Input: n = 4, e = 6 
0 -> 1, 0 -> 2, 1 -> 2, 2 -> 0, 2 -> 3, 3 -> 3 
Output: DFS from vertex 1 : 1 2 0 3 
Explanation: 
DFS Diagram: 
 



Input: n = 4, e = 6 
2 -> 0, 0 -> 2, 1 -> 2, 0 -> 1, 3 -> 3, 1 -> 3 
Output: DFS from vertex 2 : 2 0 1 3 
Explanation: 
DFS Diagram: 
 



Recommended: Please solve it on “PRACTICE ” first before moving on to the solution.
Prerequisites: See this post for all applications of Depth First Traversal.
Following are implementations of simple Depth First Traversal. The C++ implementation uses an adjacency list representation of graphs. STL‘s list container is used to store lists of adjacent nodes.
Solution:

Approach: Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking. So the basic idea is to start from the root or any arbitrary node and mark the node and move to the adjacent unmarked node and continue this loop until there is no unmarked adjacent node. Then backtrack and check for other unmarked nodes and traverse them. Finally, print the nodes in the path.
Algorithm: 
Create a recursive function that takes the index of the node and a visited array.
Mark the current node as visited and print the node.
Traverse all the adjacent and unmarked nodes and call the recursive function with the index of the adjacent node.
Implementation:

C++
// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include <bits/stdc++.h>
using namespace std;
  
// Graph class represents a directed graph
// using adjacency list representation
class Graph 
{
public:
    map<int, bool> visited;
    map<int, list<int>> adj;
  
    // function to add an edge to graph
    void addEdge(int v, int w);
  
    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v);
};
  
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
  
void Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
  
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
  
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
  
    return 0;
}
  
