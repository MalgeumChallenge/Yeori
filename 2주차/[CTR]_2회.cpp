// https://inha.codetree.ai/missions/5/problems/taking-a-taxi-in-the-middle-of-the-marathon-2/description
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int taxiDistance(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> checkpoints(N);
    for (int i = 0; i < N; i++) {
        cin >> checkpoints[i].first >> checkpoints[i].second;
    }

    int totalDistance = 0;
    for (int i = 1; i < N; i++) {
        totalDistance += taxiDistance(checkpoints[i - 1], checkpoints[i]);
    }

    int maxSavedDistance = 0;
    for (int i = 1; i < N - 1; i++) {
        int currentDistance = taxiDistance(checkpoints[i - 1], checkpoints[i]) + taxiDistance(checkpoints[i], checkpoints[i + 1]);
        int directDistance = taxiDistance(checkpoints[i - 1], checkpoints[i + 1]);
        maxSavedDistance = max(maxSavedDistance, currentDistance - directDistance);
    }

    int minDistance = totalDistance - maxSavedDistance;
    cout << minDistance << endl;

    return 0;
}
