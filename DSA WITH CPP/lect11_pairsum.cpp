#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum_bruteforce(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);

            }
        }
    } return ans;
}

vector<int> pairsum_optimal(vector<int> nums, int target)
{

    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    int sum;
    
    while (i < j)
    {
        sum = nums[i] + nums[j];
        if (sum > target)
        {

            j--;
        }
        else if (sum < target)
        {

            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j); 
            return ans;
        }
    }
   
return ans;
}



int main()
{
    vector<int> n = {0, 1, 2, 4, 8};
    int t = 10;
    vector<int> a = pairsum_optimal(n, t);
    cout << "returns index of vect n " << a[0] << "  " << a[1];
    return 0;
}