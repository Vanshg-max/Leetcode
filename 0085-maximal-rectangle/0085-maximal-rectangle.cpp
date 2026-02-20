class Solution {
private:

vector<int> nextSmallerElement(int *arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(int *arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = 0; i < n; i++){   // FIXED (i++)
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(int *heights, int n){
    vector<int> next = nextSmallerElement(heights, n);
    vector<int> prev = prevSmallerElement(heights, n);

    int area = 0;

    for(int i = 0; i < n; i++){
        int l = heights[i];

        if(next[i] == -1)
            next[i] = n;

        int b = next[i] - prev[i] - 1;
        int newArea = l * b;

        area = max(area, newArea);
    }
    return area;
}

public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.size() == 0) return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        int height[m];

        // first row
        for(int j = 0; j < m; j++){
            height[j] = matrix[0][j] - '0';
        }

        int area = largestRectangleArea(height, m);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){

                if(matrix[i][j] == '1'){
                    height[j] += 1;
                }
                else{
                    height[j] = 0;
                }
            }

            int newArea = largestRectangleArea(height, m);
            area = max(area, newArea);
        }

        return area;
    }
};