/*
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Pair structure: first = distance, second = node_id
typedef pair<int, int> pii;

void dijkstra(int src, vector<vector<pii>>& adj, int V) {
    // Step 1: Initialize distances as infinity
    vector<int> dist(V, INT_MAX);
    
    // Step 2: Source distance is 0
    dist[src] = 0;

    // Step 3: Min-Heap Priority Queue (distance, node)
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        // Step 4: Extract the node with the smallest distance
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Step 5: Skip if we found a better path already
        if (d > dist[u]) continue;

        // Step 6: Explore neighbors and Relax
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    // Print the result
    cout << "Node \t Distance from Source" << endl;
    for (int i = 0; i < V; i++) {
        cout << i << " \t\t " << dist[i] << endl;
    }
}

int main() {
    int V = 5;
    vector<vector<pii>> adj(V);

    // Adding edges (u, v, weight)
    adj[0].push_back({1, 10});
    adj[0].push_back({2, 3});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 2});
    adj[2].push_back({1, 4});
    adj[2].push_back({3, 8});
    adj[2].push_back({4, 2});
    adj[3].push_back({4, 7});
    adj[4].push_back({3, 9});

    dijkstra(0, adj, V);

    return 0;
}

*/


/*
INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF
1 Include iostream, vector, queue, and climits libraries 
2 Use a typedef or pair for pii (pair of integers) to represent distance and node 
3 Create a void function 'dijkstra' taking (int src, vector of vectors of pii adj, int V) 
4 Initialize a vector 'dist' of size V with INT_MAX to represent infinity 
5 Set the distance of the source node dist[src] to 0 
6 Declare a priority_queue of pii, using a vector and greater comparator for Min-Heap 
7 Push the pair {0, src} into the priority queue 
8 Start a while loop that continues until the priority queue is empty 
9 Get the top element's distance as d and node as u, then pop from the queue 
10 Add a check: if d is greater than dist[u], continue to the next loop iteration 
11 Use a for-each loop to iterate through every edge in the adjacency list of u 
12 Inside the loop, get the neighbor v and its edge weight 
13 Apply Relaxation: if dist[u] + weight is less than dist[v] 
14 Update dist[v] and push the new {dist[v], v} pair into the priority queue 
15 After the loop, print the finalized distances for each node 
16 In main, create an adjacency list for the graph, call dijkstra, and return 0
*/


#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

void dijkstra(int src, vector<vector<pii>>& adj, int V) {
    // 1. Initialize distance vector with INT_MAX
    
    // 2. Set source distance to 0
    
    // 3. Setup Min-Heap priority queue
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        // 4. Extract minimum distance node
        
        // 5. Relaxation Logic
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            // Check if (dist[u] + weight) is a better path to v
            if (/* formula */) {
                // Update dist[v] and push to pq
            }
        }
    }
    
    // 6. Print the results
}

int main() {
    // 7. Define V, build adj list, and call function
}