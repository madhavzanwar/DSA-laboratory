#include <iostream>
using namespace std;

class Graph
{
    int cost[10][10], result[10][10];
    int visited[10];
    int V, E;

public:
    void accept()
    {
        cout << "Enter number of vertices: ";
        cin >> V;

        cout << "Enter number of edges: ";
        cin >> E;

        // Initialize cost matrix
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (i == j)
                    cost[i][j] = 0;
                else
                    cost[i][j] = 999;
            }
        }

        cout << "Enter Source Destination Weight:\n";

        for (int i = 0; i < E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            cost[u][v] = w;
            cost[v][u] = w;      // Undirected graph
        }
    }

    void display()
    {
        cout << "\nCost Matrix:\n";

        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cout << cost[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void prims()
    {
        int min, a, b;
        int total = 0;

        // Copy original matrix into result matrix
        for (int i = 0; i < V; i++)
        {
            visited[i] = 0;

            for (int j = 0; j < V; j++)
            {
                result[i][j] = cost[i][j];
            }
        }

        visited[0] = 1;      // Start from vertex 0

        cout << "\nEdges in MST:\n";

        for (int k = 1; k < V; k++)
        {
            min = 999;

            for (int i = 0; i < V; i++)
            {
                if (visited[i] == 1)
                {
                    for (int j = 0; j < V; j++)
                    {
                        if (visited[j] == 0 && result[i][j] < min)
                        {
                            min = result[i][j];
                            a = i;
                            b = j;
                        }
                    }
                }
            }

            cout << a << " -> " << b << " = " << min << endl;

            total += min;
            visited[b] = 1;

            // Replace selected edge by 999
            result[a][b] = 999;
            result[b][a] = 999;
        }

        cout << "\nMinimum Cost = " << total << endl;

        cout << "\nVisited Array:\n";
        for (int i = 0; i < V; i++)
        {
            cout << visited[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g;

    g.accept();
    g.display();
    g.prims();

    return 0;
}
