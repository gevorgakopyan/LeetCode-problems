class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> catalog(numCourses);
        vector<int> prereq(numCourses, 0);
        for(auto edge : prerequisites)
        {
            int a = edge[0];
            int b = edge[1];
            catalog[b].push_back(a);
            prereq[a]++;
        }
        queue<int> q;
        for(int i = 0; i < numCourses; i++)
        {
            if(prereq[i] == 0)
            {                
                q.push(i);
                prereq[i]--;
            }
        }
        int count = 0;
        while(!q.empty())
        {
            int course = q.front();
            q.pop();
            count++;
            for(auto next : catalog[course])
            {
                prereq[next]--;
                if(prereq[next] == 0)
                    q.push(next);
            }
        }
        return numCourses == count;
    }
};