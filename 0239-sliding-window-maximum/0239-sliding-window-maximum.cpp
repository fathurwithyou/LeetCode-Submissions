class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int K) {
        deque<int> dq;
        vector<int> ans;
        for (int i=0; i<A.size(); i++) {
            if (!dq.empty() && dq.front() == i-K) dq.pop_front();
            while (!dq.empty() && A[dq.back()] < A[i])
                dq.pop_back();
            dq.push_back(i);
            if (i>=K-1) ans.push_back(A[dq.front()]);
        }
        return ans;
    }
};