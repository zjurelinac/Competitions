#include <cstdio>
#include <map>
#include <vector>

using namespace std;

int main() {
    int id, min, gmv = -1, gmid, gmi;
    char line[128];
    map<int, vector<int>> g;

    while (scanf("%[^\n]\n", line) > 0) {
        sscanf(line, "[%*4d-%*2d-%*2d %*2d:%2d] ", &min);
        
        switch (line[19]) {
            case 'G': 
                sscanf(line+19, "Guard #%d begins shift", &id);
                g[id].resize(60, 0);
                // printf("<00:%2d> Guard %d begins.\n", min, id);
                break;
            case 'f':
                // printf("<00:%2d> Guard %d sleeps.\n", min, id);
                g[id][min] += 1;
                break;
            case 'w':
                // printf("<00:%2d> Guard %d awakes.\n", min, id);
                g[id][min] -= 1;
                break;
        }
    }

    printf("%10s", "");
    for (int i = 0; i < 60; ++i) printf("%02d ", i);
    puts("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    for (auto it : g) {
        int c = 0, t = 0, mv = -1, mi;
        printf("[%04d] :: ", it.first);
        for (int i = 0; i < 60; ++i) {
            auto& x = it.second[i];

            c += x; x = c;
            t += x;

            if (mv < x) { mv = x; mi = i; }

            printf("%02d ", x);
        }
        printf(" => Sum: %d; Max = %d [at %d]\n", t, mv, mi);
        if (gmv < t) { gmv = t; gmid = it.first, gmi = mi; }
    }

    printf("%d %d %d => %d\n", gmid, gmv, gmi, gmid * gmi);
}
