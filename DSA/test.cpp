
   #include<iostream>
   #include<vector>
   using namespace std;

    int missingNumber(vector<int>& nums) {
          for(int i=0;i<nums.size()+1;i++){
            bool a = 0;  
              for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    a=1;
                }
             }
            if(a==0) {
                return i;
                break;
            }
       }
    }
       int main(){
          vector<int> nums{3,0,1};
          int ans=missingNumber(nums);
          cout<<ans;
   }