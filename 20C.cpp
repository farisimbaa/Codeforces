#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<int> dist(n + 1, INT_MAX);
    vector<int> previous(n+1, -1);

    priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
    > pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int currentDistance = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        if (currentDistance > dist[currentNode]) {
            continue;
        }

        for (const auto& edge : graph[currentNode]) {
            int nextNode = edge.first;
            int weight = edge.second;

            if (dist[currentNode] + weight < dist[nextNode]) {
                dist[nextNode] = dist[currentNode] + weight;
                previous[nextNode] = currentNode;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    if (dist[n] == INT_MAX) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> path;
    int currentNode = n;

    while (currentNode != -1) {
        path.push_back(currentNode);
        currentNode = previous[currentNode];
    }

    reverse(path.begin(), path.end());

    for (int node : path) {
        cout << node << " ";
    }

    cout << endl;

    return 0;
}