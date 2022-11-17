// Rectangle Area
// Problem link:
// https://leetcode.com/problems/rectangle-area/

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int areaOfA = (ax2 - ax1) * (ay2 - ay1);
        int areaOfB = (bx2 - bx1) * (by2 - by1);
        
        // calculate x overlap
        int xOverlap = min(ax2, bx2) - max(ax1, bx1);
        
        // calculate y overlap
        int yOverlap = min(ay2, by2) - max(ay1, by1);
        
        int overlappedArea = 0;
        if(xOverlap > 0 && yOverlap > 0)
            overlappedArea = xOverlap * yOverlap;
        
        return (areaOfA + areaOfB) - overlappedArea;
    }
};
