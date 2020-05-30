// My working solution 5/29/20

#include <map>
#include <vector>
using namespace std;

vector<vector<int>> highFive(vector<vector<int>>& items) {
    vector<vector<int>> result;
    map<int, vector<int>> id_to_scores;
    for (int i = 0; i < items.size(); i++) {
        vector<int> pair = items[i];
        int id = pair[0];
        int score = pair[1];
        id_to_scores[id].push_back(score);
    }
    for (auto [id, scores] : id_to_scores) {
        vector<int> pair;
        int total{};
        int counter{};
        sort(scores.rbegin(), scores.rend());
        for (int i = 0; i < scores.size(); i++) {
            if (counter > 4) {
                break;
            }
            total += scores[i];
            counter++;
        }
        int average = total / counter;
        pair.push_back(id);
        pair.push_back(average);
        result.push_back(pair);
    }
    return result;
}

