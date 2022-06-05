#include <iostream>
using namespace std;
int numberOfArithmeticSlices(int nums[],int size)
{
  int ans = 0;
  if (size < 3)
  {
    return 0;
  }
  else
  {
    int j = 0;
    int ans = 0;
    for (int k = 0; k < size - 2; k++)
    {
      int dif = nums[k] - nums[k + 1];

      for (int i = k; i < size - 1; i++)
      {
       cout<<(nums[i] - nums[i + 1])<<" "<<dif<<endl;
        if ((nums[i] - nums[i + 1]) == dif)
        {
    cout<<"hello"<<" "<<j<<" "<<ans<<endl;

          j++;
          if (j >= 3)
          {
            ans++;
          }
        }
        else
        {
          j = 0;
          break;
        }
      }
    }
  }
  return ans;
}
int main()
{
  int nums[]={1,2,3,4};
  cout<<numberOfArithmeticSlices(nums,4);
  return 0;
}