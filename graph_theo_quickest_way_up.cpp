#include <iostream>
#include <vector>
#include <queue>
#define min(x, y) (x<y?x:y)
#define max(x, y) (x>y?x:y)

typedef std::pair<int, int> PAIRS;

int main()
{
    int T, L, S;
    std::cin >> T;
    for(int t = 0; t < T; t++) {
        std::vector<std::vector<PAIRS>> edges(101);
        scanf("%d,%d", &L, &S);
        PAIRS edge;
        for(int l = 0; l < L; l++) {
            scanf("%d,%d", &edge.first, &edge.second);
            edges[edge.first].push_back(std::make_pair(0, edge.second));
        }
        for(int s = 0; s < S; s++) {
            scanf("%d,%d", &edge.first, &edge.second);
            edges[edge.first].push_back(std::make_pair(0, edge.second));
        }
        for(int v = 1; v < 101; v++) {
            for(int i = 1; i <= 6; i++) {
                if(i + v >= 101) {
                    break;
                }
                else {
                    edges[v].push_back(std::make_pair(1, v + i));
                }
            }
        }
        std::priority_queue<PAIRS, std::vector<PAIRS>, std::greater<PAIRS>> Q;
        std::vector<int> distTo(101, 2000000000), edgeTo(101, -1);
        Q.push(std::make_pair(0, 1));
        distTo[1] = 0;
        while(!Q.empty()) {
            PAIRS p = Q.top();
            if(p.second == 100) {
                break;
            }
            Q.pop();
            int here = p.second;
            for(std::vector<PAIRS>::iterator it = edges[here].begin();
                    it != edges[here].end(); it++) {
                if(distTo[here] + it->first < distTo[it->second]) {
                    distTo[it->second] = distTo[here] + it->first;
                    edgeTo[it->second] = here;
                    Q.push(std::make_pair(distTo[it->second], it->second));
                }
            }
        }
        std::cout << distTo[100] << std::endl;
    }
    return 0;
}
