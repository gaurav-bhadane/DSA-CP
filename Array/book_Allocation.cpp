//{ Driver Code Starts
// Initial template for C++

#include<iostream>
#include<numeric>
#include<vector>
using namespace std;


// } Driver Code Ends
//User function template in C++


    //Function to find minimum number of pages.
    bool isPossibleSoln(int A[],int N, int M, int soln){
        int pageSum=0;
        int c=1;
        for(int i=0;i<N;i++){
        
            if (A[i]>soln){
                return false;
            }
            if (pageSum+A[i]>soln){
                c++;
                pageSum=A[i];
                if (c>M){
                    return false;
                }
            }
            else{
                pageSum+=A[i];
            }
            
        }
        return true;
    }
    
    
    int findPages(int A[], int N, int M)
    {
        //code here
        if(M>N){
            return -1;
        }
        int start=0;
        int end=std::accumulate(A,A+N,0),ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if (isPossibleSoln(A,N,M,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }

//{ Driver Code Starts.

int main() {
    int n=4,m=2;
    int a[]={12,34,67,90};
    cout<<findPages(a,n,m);
    return 0;
}

// } Driver Code Ends