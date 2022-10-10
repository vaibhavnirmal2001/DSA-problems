// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> arr){
       //code here
       int m = arr.size();
       int n = arr[0].size();
       
       int a = 0, b = 1;
       int i = 0, j = 0;
       pair<int, int> res = {0, 0};
       
       while(true){
           if(arr[i][j] == 0){
               i = i + a;
               j = j + b;
           }
           else{
               arr[i][j] = 0;
               if(a==0 && b==1){
                   a = 1;
                   b = 0;
               }
               else if(a==1 && b==0){
                   a = 0;
                   b = -1;
               }
               else if(a==0 && b==-1){
                   a = -1;
                   b = 0;
               }
               else if(a==-1 && b==0){
                   a = 0;
                   b = 1;
               }
               i = i + a;
               j = j + b;
           }
           if(i>=m || i<0 || j>=n || j<0){
               res.first = i-a;
               res.second = j-b;
               break;
           }
       }
       return res;
   }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends