#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, bool>> words;
    int i = 0;
    while (i < n) {
        string word;
        cin >> word;
        words.push_back({word.size(), true});
        i += word.size();
    }
    for (unsigned int i = 0; i < words.size(); i++) {
        char c_prev;
        bool first = true;
        for (int j = 0; j < words[i].first; j++) {
            char c;
            cin >> c;
            if (first) { first = false; continue; }
            if (c != c_prev) c_prev = c;
            else words[i].second = false;
        }
    }

    int answer = 0;
    for (pair<int, bool> word : words) {
        if (!(word.second)) answer++;
    }

    cout << answer;

    return 0;
}
