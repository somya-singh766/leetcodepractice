1class Solution {
2public:
3    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
4        sort(players.begin(), players.end());
5        sort(trainers.begin(), trainers.end());
6
7        int i = 0, j = 0;
8        int matches = 0;
9
10        while (i < players.size() && j < trainers.size()) {
11            if (trainers[j] >= players[i]) {
12                matches++;
13                i++;   // next player
14                j++;   // next trainer
15            } else {
16                j++;   // trainer too weak
17            }
18        }
19
20        return matches;
21    }
22};