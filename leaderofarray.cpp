vector<int> superiorElements(vector<int>& a) {
    int j;
    vector<int> ans;
    for (int i = 0; i < a.size(); i++) {
        bool leader = true;
        for (j = i + 1; j < a.size(); j++) {
            if (a[j] > a[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
