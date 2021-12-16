class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adjacentList(n);
        int u, v;
        for(int i = 0; i < edges.size();i++)
        {
            u = edges[i][0];
            v = edges[i][1];
            adjacentList[u].push_back(v);
            adjacentList[v].push_back(u);
        }
        int curr, next;
        queue<int> q;
        vector<bool> seen(n,false);
        q.push(start);
        seen[start] = true;
        while(!q.empty())
        {
            curr = q.front();
            for(int i = 0; i < adjacentList[curr].size(); i++)
            {
                next = adjacentList[curr][i];
                if(!seen[next])
                {
                    q.push(next);
                    seen[next] = true;
                }
            }
            q.pop();
        }
        if(seen[end])
            return true;
        else
            return false;
    }
};