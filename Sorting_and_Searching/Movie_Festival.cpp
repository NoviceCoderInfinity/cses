#include <bits/stdc++.h>
using namespace std;

int maximum_movies (vector<pair<int, int>> &movies) {
    sort (movies.begin(), movies.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.first < b.first;
    });
    int movies_count = 1, start_time = movies.back().first;
    for (int i = movies.size() - 1; i >= 0; i--) {
        if (movies[i].second <= start_time) {
            start_time = movies[i].first;
            movies_count++;
        }
    }
    return movies_count;
}

int main () {
    int n; cin >> n;
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {cin >> movies[i].first >> movies[i].second;}
    int max_movies = maximum_movies(movies);
    cout << max_movies << endl;
    return 0;
}