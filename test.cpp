bool B[];
void dfs(int u)
{
    B[u] = true;
    //tab[u].first = stopper; stopper++;
    for (auto i : v[u])
        if (!B[i])
            dfs(i);
    //tab[u].second = stopper; stopper++;
}