//
//  main.cpp
//  Robot Return to Origin
//
//  Created by Aj Gill on 4/13/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int countLR = 0, countUD = 0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i] == 'U'){
                countUD++;
            }
            else if(moves[i] == 'D'){
                countUD--;
            }
            else if(moves[i] == 'L'){
                countLR++;
            }
            else{
                countLR--;
            }
        }
        if(countLR == 0 && countUD == 0){
            return true;
        }
        else{
            return false;
        }
    }
};


string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string moves = "UDLR";
    bool ret = Solution().judgeCircle(moves);
    string out = boolToString(ret);
    cout << out << endl;
    return 0;
}
