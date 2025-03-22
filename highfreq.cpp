int maximumFrequency(vector<int> &arr, int n)
{
    int maxfreq=0;
    int maxnumber=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        maxfreq=max(maxfreq,mpp[arr[i]]);
    };

    for(int i=0;i<n;i++){
        if(maxfreq==mpp[arr[i]]){
            maxnumber=arr[i];
            break;
        }
    }
    return maxnumber;
}
