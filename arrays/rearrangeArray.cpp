#include<iostream>
using namespace std;
#include<vector>
vector<int> rearrangeArray(vector<int>& nums) {
        int posIndex = 0,negIndex = 1;
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i=0;  i<nums.size();i++)
        {
            if(nums[i] < 0)
            {
                ans[negIndex] = nums[i];
                negIndex += 2;

            }
            else
            {
                ans[posIndex] = nums[i];
                posIndex += 2;

            }
            

        }
        return ans;
        
    }

    int main()
{
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int> ans = rearrangeArray(a);
  
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
        

    
}