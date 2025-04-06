#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result;
    int index = 0;
    bool endLarger=false;
    string s2Substring="";

    for(size_t i = 1; i <= s2.size(); i++) {
        if(endLarger == true){
            result.push_back(-1);
            continue;

        }

        s2Substring = s2Substring+s2[i];
        size_t found = s1.find(s2Substring, index);
        
        if (found != string::npos) {
            result.push_back(found);
            index = found;
        
        } else {
            result.push_back(-1);
            endLarger=true;
        }
    }
    
    return result;
}
