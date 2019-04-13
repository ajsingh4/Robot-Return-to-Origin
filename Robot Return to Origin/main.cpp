//
//  main.cpp
//  Robot Return to Origin
//
//  Created by Aj Gill on 4/13/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        map<string,int> hMap;
        //Interesting, can't do insert with char, only with string
        hMap.insert(make_pair("UD", 0));
        hMap.insert(make_pair("LR", 0));
        map<string,int>::iterator itUD = hMap.find("UD");
        map<string,int>::iterator itLR = hMap.find("LR");
        for(int i=0; i<moves.size(); i++){
            map<string,int>::iterator it;
            if(moves[i] == 'U'){
                itUD->second++;
            }
            else if(moves[i] == 'D'){
                itUD->second--;
            }
            else if(moves[i] == 'L'){
                itLR->second++;
            }
            else{
                itLR->second--;
            }
        }
        if(itUD->second == 0 && itLR->second == 0){
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
