// Including climits, which allows for usage of INT_MIN constant in C++
#include <climits>
class Solution {
  public:
    string minWindow(string searchString, string t) {
      
      // Our hashtable of characters filled with occurences in our string
      vector<int> table(128, 0);
      
      // Store the frequency of characters in string t
      for(auto character : t) {
        table[character]++;
      }
      
      int start = 0;
      int end = 0;
      int counter = t.size();
      int startMin = 0;
      int minimum = INT_MAX;
      
      // Here we use the 2 pointer approach
      while(end < searchString.size()) {
          if(table[searchString[end]] > 0) {
            counter--;
          }
          
          table[searchString[end]]--;
          end++;
          
          while(counter == 0) {
            if(end - start < minimum) {
                startMin = start;
                minimum = end - start;
            }
            
            table[searchString[start]]++;
            
            if(table[searchString[start]] > 0) {
              counter++;
            }
            start++;
          }
      }
      
      // Case when no substring satisfies
      if(minimum == INT_MAX) {
          return "";
      }
      
      return searchString.substr(startMin, minimum);
  }
};
