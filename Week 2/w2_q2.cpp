#include <bits/stdc++.h>
using namespace std;
  vector<int> twoSum(vector<int>& nums, int target) {
          vector<int>v(nums);
          sort(v.begin(),v.end());
          int left=0;int right=nums.size()-1;
          int val1=-1,val2=-1;
          while(left<right){
            if(v[left]+v[right]==target) {val1=v[left];val2=v[right];break;}
            if(v[left]+v[right]>target) right-=1;
             if(v[left]+v[right]<target) left+=1;
          }
           if (val1 == -1) return {-1, -1};
          int s=-1;int e=-1;
         for (size_t i = 0; i < nums.size(); i++) {
    if (s == -1 && nums[i] == val1) s = i;
    else if (e == -1 && nums[i] == val2) e = i;
}

          return {s+1,e+1};
    }
    int main(){
        int n;
        int x;
        cin>>n;
        cin>>x;
        vector<int> v(n);
        for(size_t i=0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
        }
        vector<int> v1=twoSum(v,x);
        if(v1[0]==-1 || v1[1]==-1) cout<<"IMPOSSIBLE"<<endl;
        else cout<<v1[0]<<" "<<v1[1]<<endl;
    }
    
