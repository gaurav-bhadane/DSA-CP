//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

    
    bool isPossible(vector <int> arr,int n,int k,int mid){
        int c=1;
        int pos=arr[0];
        
        for(int i=0;i<n;i++){
            if (arr[i]-pos>=mid){
                c++;
                pos=arr[i];
            }
            if(c==k){
                return true;
            }
        }
        return false;
    }
    
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start=0,end=stalls[n-1]-stalls[0];
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if (isPossible(stalls,n,k,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

//{ Driver Code Starts.

int main() {
    int n=5;
    int k=3;
    vector <int> stalls{1,2,4,8,9};
    cout<<solve(n,k,stalls);

    return 0;
}
// } Driver Code Ends