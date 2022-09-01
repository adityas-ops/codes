class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        double a = 0.0000;
        vector<int> v;
        for(int i = 0; i<n1;i++){
            v.push_back(nums1[i]);
        }
        for(int i = 0; i<n2;i++){
            v.push_back(nums2[i]);
        }
        int n = v.size();
        sort(v.begin(),v.end());
        if(n%2 == 1){
            int m = n/2;
            a = (double)v[m];
        }
        else{
            int m = n/2;
            a = (double)((double)(v[m]+v[m-1])/2);
        }
        return a;
    }
};