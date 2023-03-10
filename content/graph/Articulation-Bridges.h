/**
 * Author: cpalgorithms
 * Date: 2015-02-23
 * License: CC0
 * Source: cpalgorithms
 * Description: get all articulation points/bridges, 0-based
 * Time: O(V+E)
 * Status: tested
 */

#pragma once

vector<bool> visited;
vector<int> tin, low;
int timer;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            ++children;
            if (low[to] >= tin[v] && p!=-1)
                IS_CUTPOINT(v);
            if (low[to] > tin[v])
                IS_BRIDGE(v, to);
        }
    }
    if(p == -1 && children > 1)
        IS_CUTPOINT(v);
}

void find() {
    timer = 0;
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs (i);
    }
}