#include <iostream>
#include <queue>

using namespace std;

int n = 0;
int areax[] = {1, 0, -1, 0};
int areay[] = {0, 1, 0, -1};
int graph[10][10] = {
    0,
};

void bfs() {
  std::queue<std::pair<int, int>> tracker;
  tracker.push(std::pair<int, int>(0, 0));
  int x = 0, y = 0;
  while (!tracker.empty()) {
    auto t = tracker.front();
    tracker.pop();
    for (int i = 0; i < 4; i++) {
      int nx = t.first + areax[i];
      int ny = t.second + areay[i];
      if (0 <= nx < n && 0 <= ny < n && graph[nx][ny] == 1) {
        graph[nx][ny] += graph[t.first][t.second];
        tracker.push(std::pair<int, int>(nx, ny));
      }
    }
  }
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cin >> graph[i][j];
  }

  bfs();
  cout << graph[n - 1][n - 1];

  return 0;
}
