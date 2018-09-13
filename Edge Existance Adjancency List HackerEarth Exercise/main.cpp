#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nodes, edges, a, b, q, qa, qb;
    vector<int> adjList[1001];
    cin >> nodes;
    cin >> edges;
    
    for(int i = 0; i < edges; i++) {
        cin >> a >> b;
        adjList[a].push_back(b);
        cin >> q;
        for(int j = 0; j < q; j++) {
            cin >> qa >> qb;
            cout << adjList[a][b] << endl;
        }
       
    }
    return 0;
}