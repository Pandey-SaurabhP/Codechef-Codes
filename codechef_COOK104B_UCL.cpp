/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T;
    cin >> T;

    map <string, int> goalDiff, points;

    while(T--){
        // Code here
        goalDiff.clear();
        points.clear();

        string team1, team2, ig;
        int score1, score2;

        for (int i = 0; i < 12; i++){
            cin >> team1 >> score1 >> ig >> score2 >> team2;

            if (goalDiff.find(team1) == goalDiff.end()){
                goalDiff.insert(pair <string, int>(team1, score1 - score2));
            }
            else{
                goalDiff[team1] += score1 - score2;
            }
            if (goalDiff.find(team2) == goalDiff.end()){
                goalDiff.insert(pair <string, int>(team2, score2 - score1));
            }
            else{
                goalDiff[team2] += score2 - score1;
            }

            if (points.find(team1) == points.end()){
                points.insert(pair <string, int>(team1, (score1 > score2? 3: 0)));
            }
            else{
                points[team1] += (score1 > score2? 3: 0);
            }
            if (points.find(team2) == points.end()){
                points.insert(pair <string, int>(team2, (score2 > score1? 3: 0)));
            }
            else{
                points[team2] += (score2 > score1? 3: 0);
            }

            if (score1 == score2){
                    points[team1] += 1;
                    points[team2] += 1;
            }
        }

        string teamName[4];
        int teampoints[4], teamgoalDiff[4];
        int i = 0;

        for (auto itr = points.begin(); itr != points.end(); itr++){
            teamName[i] = itr -> first;
            teampoints[i] = itr -> second;
            teamgoalDiff[i] = goalDiff[teamName[i]];

            i++;
        }

        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                if (teampoints[i] > teampoints[j]){
                    swap (teampoints[i], teampoints[j]);
                    swap (teamName[i], teamName[j]);
                    swap (teamgoalDiff[i], teamgoalDiff[j]);
                }
            }
        }

        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                if (teampoints[i] == teampoints[j]){
                    if (teamgoalDiff[i] > teamgoalDiff[j]){
                        swap (teampoints[i], teampoints[j]);
                        swap (teamName[i], teamName[j]);
                        swap (teamgoalDiff[i], teamgoalDiff[j]);
                    }
                }
            }
        }

        cout << teamName[0] << " " << teamName[1] << "\n";
    }

    return 0;
}
