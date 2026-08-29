//4.Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.

#include<stdio.h>

int main(){

  // Rows = IPL matches, Columns = Teams
 int cricketScores[3][2] = {
        {180, 195}, // Match 1
        {210, 198}, // Match 2
        {175, 175}  // Match 3
    };

     int matches = 3;
    int teams = 2;

    for(int i=0;i<matches;i++){
            int highest = 0;
        for(int j=0;j<teams;j++){
            if(cricketScores[i][j]>cricketScores[i][j+1]){
                highest = cricketScores[i][j];
            }else{
                highest = cricketScores[i][j+1];
            }
            break;
        }
          printf("Highest score in Match %d: %d\n", i + 1, highest);
    }

return 0;
}
