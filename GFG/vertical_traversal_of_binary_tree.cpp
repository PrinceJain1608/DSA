vector<int> ans;
    map<int, vector<int>> mp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *temp = it.first;
        int level = it.second;
        mp[level].push_back(temp->data);
        if (temp->left)
        {
            q.push({temp->left, level - 1});
        }
        if (temp->right)
        {
            q.push({temp->right, level + 1});
        }
    }
    for (auto i : mp)
    {
        for (int val : i.second)
        {
            ans.push_back(val);
        }
    }
    return ans;