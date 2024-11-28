class Solution {
public:
    void printGraph(const vector<vector<int>>& graph) {
        for (int i = 0; i < graph.size(); ++i) {
            cout << "City " << i << ": ";
            for (int neighbor : graph[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
    int shortestPath(int n, vector<vector<pair<int,int>>>& graph) {
        vector<int> dist(
            n,
            INT_MAX); // dynamic one dimention array , each element is INT_MAX;
        dist[0] = 0;  // initialize source 0
        // priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        pq.push({0, 0}); // {distance, node}

        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();
            if (d > dist[node])
                continue;
            for (auto [neighbor,weight] : graph[node]) {
                if (dist[node]+1  < dist[neighbor]) {
                    // update dist[neighbor]
                    dist[neighbor] = dist[node]+1 ;
                    pq.push({dist[neighbor], neighbor});
                }
            }
        }
        return dist[n - 1];
    }
    vector<int> shortestDistanceAfterQueries(int n,
                                             vector<vector<int>>& queries) {

        
        vector<vector<pair<int, int>>> graph(n);
        for (int i = 0; i < n; i++) {
            graph[i].push_back({i,i + 1});
        }
        //printGraph(graph);
        vector<int> answer;
        for (auto& query : queries) {
            int u = query[0];
            int v = query[1];
            graph[u].push_back({u,v});
            int shortest = shortestPath(n, graph);
            answer.push_back(shortest);
        }
        return answer;
    }
};
