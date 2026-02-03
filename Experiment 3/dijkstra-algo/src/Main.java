/*
import java.util.*;

// Helper class to store node and its distance for the Priority Queue
class Node implements Comparable<Node> {
    int id;
    int distance;

    Node(int id, int distance) {
        this.id = id;
        this.distance = distance;
    }

    // Comparison logic for the Min-Heap
    public int compareTo(Node other) {
        return Integer.compare(this.distance, other.distance);
    }
}

class DijkstraAlgorithm {
    public static int[] findShortestPaths(List<List<int[]>> adj, int src) {
        int V = adj.size();
        int[] dist = new int[V];

        // Step 1: Initialize distances to "Infinity"
        Arrays.fill(dist, Integer.MAX_VALUE);
        dist[src] = 0;

        // Step 2: Initialize Priority Queue (Min-Heap)
        PriorityQueue<Node> pq = new PriorityQueue<>();
        pq.add(new Node(src, 0));

        while (!pq.isEmpty()) {
            // Step 3: Extract node with the smallest distance
            Node current = pq.poll();
            int u = current.id;
            int d = current.distance;

            // Step 4: Skip if we found a better path already
            if (d > dist[u]) continue;

            // Step 5: Relax neighbors
            for (int[] edge : adj.get(u)) {
                int v = edge[0];
                int weight = edge[1];

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.add(new Node(v, dist[v]));
                }
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        // Step 6: Define graph using Adjacency List
        int V = 5;
        List<List<int[]>> adj = new ArrayList<>();
        for (int i = 0; i < V; i++) adj.add(new ArrayList<>());

        // Adding edges: adj.get(u).add(new int[]{v, weight})
        adj.get(0).add(new int[]{1, 9});
        adj.get(0).add(new int[]{2, 6});
        adj.get(0).add(new int[]{1, 3});
        adj.get(2).add(new int[]{3, 1});

        int[] result = findShortestPaths(adj, 0);

        System.out.println("Shortest distances from source 0:");
        for (int i = 0; i < result.length; i++) {
            System.out.println("To " + i + " : " + result[i]);
        }
    }
}
*/


/*
INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF
1 Import java.util.* to access PriorityQueue, List, and ArrayList
2 Create a helper class 'Node' that implements Comparable to store id and distance
3 Inside Node, write a compareTo method that compares distances (Min-Heap logic)
4 Create a static method 'findShortestPaths' taking a List of Lists of int arrays and a source integer
5 Initialize an integer array 'dist' of size V and fill it with Integer.MAX_VALUE
6 Set the source distance dist[src] to 0
7 Initialize a PriorityQueue of type Node and add the source node with distance 0
8 Start a while loop that runs until the PriorityQueue is empty
9 Poll the Node with the smallest distance and store its id as u and distance as d
10 If d is greater than dist[u], use 'continue' to skip this node
11 Use a for-each loop to iterate through all neighbors in the adjacency list for u
12 Inside, calculate the new distance: dist[u] + weight
13 If the new distance is less than dist[v], update dist[v] and add a new Node(v, dist[v]) to the queue
14 Return the final dist array
15 In the main method, construct the adjacency list, call the function, and print the results using a loop
 */


import java.util.*;

// Class to handle node comparisons
class Node implements Comparable<Node> {
    int id, distance;
    Node(int id, int distance) { this.id = id; this.distance = distance; }
    public int compareTo(Node other) { return Integer.compare(this.distance, other.distance); }
}

public class DijkstraSkeleton {
    public static int[] dijkstra(List<List<int[]>> adj, int src) {
        int V = adj.size();
        int[] dist = new int[V];

        // 1. Fill distance array with a very large value

        // 2. Set source distance to 0

        // 3. Create PriorityQueue of Nodes
        PriorityQueue<Node> pq = new PriorityQueue<>();

        while (/* pq is not empty */) {
            // 4. Get the smallest distance node

            // 5. Relaxation logic
            for (int[] neighbor : adj.get(u)) {
                int v = neighbor[0];
                int weight = neighbor[1];

                if (/* Check if shortcut exists */) {
                    // Update and add to pq
                }
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        // 6. Setup graph and call dijkstra
    }
}