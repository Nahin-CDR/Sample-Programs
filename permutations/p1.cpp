#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;



// slave or worker function
void recursionPermute(
    vector<int>&nums,
    vector<int>&ds,
    vector<vector<int> > &ans,
    vector<bool>&isTaken){

    // base case
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }   

    // we base case is not hitted

    for(int i=0; i<nums.size(); i++){
        if(!isTaken[i]){
            isTaken[i] = true;
            ds.push_back(nums[i]);
            // call the recursive function
            recursionPermute(nums,ds,ans,isTaken);
            isTaken[i] = false;
            ds.pop_back();
        }
    }
}



// Master or Base function
void permutation(vector<int>&nums){
    vector< vector<int> > ans; // store the answer
    vector<int>ds; // data structure that will store the temporary data
    vector<bool>taken(nums.size(),false);
    recursionPermute(nums,ds,ans,taken);
}



int main(){
    cout<<"\n\n============================================\n\n";
    cout<<"version : 1.0\ncoder : nahin\n";
    cout<<"Released Date : 29-03-2024\n\n";




    cout<<"Welcome Master\n";
    cout<<"This is a C++ program to find permutations\n";
    cout<<"I will take an array of distinct integers and will give\n";
    cout<<"permutations of those numbers in array.\n\n";

    int len;
    bool notValid = true;
    while(notValid){
        cout<<"Define array Size (between 1-9) : ";
        cin>>len;
        if(len<=9){
            notValid = false;
        }else{
            cout<<"invalid input ! kindly define size again. \n";
        }
    }
    cout<<"\n";
    cout<<"Now enter numbers into array :\n";

    vector<int>nums;
    for(int i=0; i<len; i++){
        cout<<"Enter number "<<i+1<<" : ";
        int n;
        cin>>n;
        nums.push_back(n);
        cout<<"inserted ! \n";
    }
    
    cout<<"\n====================== \n\n";
    cout<<"Output : \n";
    vector< vector<int> > ans;

    permutation(nums);

    cout<<"\n";
    cout<<"=============== Program Executed =============\n\n";
    return 0;
}
