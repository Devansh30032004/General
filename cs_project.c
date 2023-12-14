// The code assumes that the vertices are numbered from 0 to V-1. Make sure to input
// valid source and destination vertices within this range.

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define V 9

int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void printPath(int parent[], int j, char loc[][50])
{
    // Base Case: If j is source
    if (parent[j] == -1)
    {
        printf("%s ", loc[j]);
        return;
    }

    printPath(parent, parent[j], loc);

    printf("--> %s ", loc[j]);
}

void printShortestPath(int parent[], int src, int dest, int dist[], char loc[][50])
{
    printf("Shortest Path from %d to %d: ", src, dest);
    printPath(parent, dest, loc);
    printf("\n");
    printf("Travel Distance: %d km\n", dist[dest]);
    int avg_speed = 42;
    float time = (float)dist[dest] / avg_speed;
    time *= 60;
    printf("Travel Time: %1.1f mins\n", time);
}

void dijkstra(int graph[V][V], int src, int dest, char loc[][50])
{
    int dist[V];
    bool sptSet[V];
    int parent[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    printShortestPath(parent, src, dest, dist, loc);
}

int main()
{
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    int src, dest;
    printf("Enter source vertex: \n");
    scanf("%d", &src);
    printf("Enter destination vertex: \n");
    scanf("%d", &dest);

    char loc[21][50] = {{"Ara Jn."}, {"Jamira"}, {"Pali"}, {"Bihta"}, {"Patel Halt"}, {"Sadisopur"}, {"Goriya Dera"}, {"Danapur"}, {"Phulwari"}, {"Sachiwalay Halt"}, {"Patna Jn."}, {"Parsa Bazaar"}, {"Neema Halt"}, {"Jehanabad"}, {"Rajendra Nagar Tr."}, {"Patna Saheb"}, {"Dedarganj"}, {"Dak Bangla"}, {"Fraser Road"}, {"Bihar Mueseum"}, {"Patliputra Jn."}};
    dijkstra(graph, src, dest, loc);

    return 0;
}
