class Solution {
public:
  
   void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor,int color)
   {
     if(image[sr][sc] == color)
     {
       image[sr][sc] = newColor;
       if(sr >= 1 )
       {
         floodFill(image,sr-1,sc,newColor,color);
       }
       if(sc >= 1)
       {
         floodFill(image,sr,sc-1,newColor,color);
       }
       if(sr < image.size() - 1)
       {
         floodFill(image,sr+1,sc,newColor,color);
       }
       if(sc < image[0].size() - 1)
       {
         floodFill(image,sr,sc+1,newColor,color);
       }
       
     }
   }
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
          return image;
      int color = image[sr][sc];
       floodFill(image,sr,sc,newColor,color);
      return image;
    }
};