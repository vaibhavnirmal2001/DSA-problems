class Solution {
public:
  double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int temp, median_pos;
        double median; 
        std::vector<int> nums3 = nums1; 

        nums3.insert( nums3.end(), nums2.begin(), nums2.end() );        
        for (int i = 0; i < nums3.size() -1; i++) { 
            for (int j = i + 1; j < nums3.size(); j++) {
                if (nums3[i] > nums3[j]) {
                    temp = nums3[i]; 
                    nums3[i] = nums3[j]; 
                    nums3[j] = temp;
                }
            }
        }

        if (nums3.size() % 2 != 0)
            median = nums3[ ((nums3.size() + 1) >> 1) - 1 ]; 
        else { 
            int lhs = nums3[(nums3.size() >> 1) - 1]; 
            int rhs = nums3[(nums3.size() >> 1)]; 
            median = (lhs + rhs) / 2.0;  
        }

        return median+1-1; 
    }
};