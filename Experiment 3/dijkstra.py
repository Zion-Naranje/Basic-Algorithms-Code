'''
import heapq
import sys

# Function to find the shortest distance from source to all other nodes
def dijkstra(adj, src):
    # Number of vertices
    V = len(adj)

    # Step 1: Initialize distances as infinity and dist[src] as 0
    dist = [sys.maxsize] * V
    dist[src] = 0

    # Step 2: Use a Priority Queue (Min-Heap) to store (distance, node)
    pq = []
    heapq.heappush(pq, (0, src))

    while pq:
        # Step 3: Extract the node with the minimum distance (Greedy Choice)
        current_dist, u = heapq.heappop(pq)

        # Step 4: Skip if we found a better path already
        if current_dist > dist[u]:
            continue

        # Step 5: Explore neighbors and "Relax" edges
        for v, weight in adj[u]:
            if dist[u] + weight < dist[v]:
                dist[v] = dist[u] + weight
                heapq.heappush(pq, (dist[v], v))

    return dist

# Main execution
if __name__ == "__main__":
    # Graph represented as an Adjacency List: (neighbor, weight)
    # Node 0: [(1, 4), (2, 2)] ... and so on
    graph = [
        [(1, 4), (2, 2)],
        [(2, 3), (3, 2), (4, 3)],
        [(1, 1), (3, 4), (4, 5)],
        [],
        [(3, 1)]
    ]
    
    source_node = 0
    shortest_distances = dijkstra(graph, source_node)

    print(f"Shortest distances from Node {source_node}:")
    for i, d in enumerate(shortest_distances):
        print(f"To Node {i}: {d}")
'''


'''
INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF
1 Import the heapq and sys libraries to handle the priority queue and infinity values 
2 Create a function dijkstra taking (adj, src) where adj is an adjacency list 
3 Determine the number of vertices V from the length of adj 
4 Initialize a list dist of size V with sys.maxsize (Infinity) 
5 Set the distance of the source node dist[src] to 0 
6 Create an empty list pq to act as your priority queue 
7 Push the tuple (0, src) into the pq using heapq.heappush 
8 Start a while loop that runs as long as the pq is not empty 
9 Inside the loop, pop the element with the smallest distance using heapq.heappop and assign to d and u 
10 Add a check: if d > dist[u], continue to the next iteration (skip outdated paths) 
11 Start a for loop to iterate through each neighbor v and weight w in adj[u] 
12 Apply the Relaxation formula: if dist[u] + w < dist[v] 
13 If true, update dist[v] with the new shorter path value 
14 Push the updated distance and node (dist[v], v) back into the pq 
15 Outside the loop, return the final dist list 
16 In main, define a directed graph as an adjacency list, call the function, and print the results
'''


import heapq
import sys

# 1. Function to find shortest paths using Greedy Technique
def dijkstra(adj, src):
    V = len(adj)
    
    # 2. Initialize the distance table with infinity
    dist = [/* Use sys.maxsize */] * V
    
    # 3. Source distance is always 0
    dist[src] = 0
    
    # 4. Initialize Priority Queue with (distance, node)
    pq = []
    heapq.heappush(pq, (0, src))

    while pq:
        # 5. Extract the vertex with the minimum distance
        d, u = heapq.heappop(pq)

        # 6. If the popped distance is greater than the recorded dist, skip
        if d > dist[u]:
            continue

        # 7. Relax the edges for all neighbors
        for v, weight in adj[u]:
            # If current distance to u + edge weight is less than dist to v
            if /* dist[u] + weight */ < /* dist[v] */:
                # Update dist[v] and push to pq
                pass

    return dist

if __name__ == "__main__":
    # Example Graph (Adjacency List)
    graph = [[(1, 10), (2, 3)], [(2, 1), (3, 2)], [(1, 4), (3, 8), (4, 2)], [(4, 7)], [(3, 9)]]
    
    # 8. Call the function and print your results
    # distances = dijkstra(graph, 0)