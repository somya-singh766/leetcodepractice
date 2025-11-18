class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)
        {
            return 1;
        }
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        vector<bool>visited(n,0);
        q.push(source);
        visited[source]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int i=0;i<adj[node].size();i++)
            {
                if(!visited[adj[node][i]])
                {
                    if(adj[node][i]==destination)
                    {
                        return 1;
                    }
                    visited[adj[node][i]]=1;
                    q.push(adj[node][i]);
                }
            }
        }
    return 0;
    }
};