//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans;
        int prod=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0) continue;
            else{
                prod*=arr[i];
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) count++;
        }
        if(count<1){
            for(int i=0;i<n;i++){
                ans.push_back(prod/(arr[i]));
            }
        }
        else if(count==1){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    ans.push_back(prod);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends