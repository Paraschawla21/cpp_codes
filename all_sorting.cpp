class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums);
        return nums;
    }
    void bubbleSort(vector<int>& nums){
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[i] > nums[j]) swap(nums[i], nums[j]);
            }
        }
    }
    void selectSort(vector<int>& nums){
        int mid;
        for(int i = 0; i < nums.size(); ++i){
            mid = i;
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] < nums[mid]) mid = j;
            }
            swap(nums[i], nums[mid]);
        }
    }
    void insertSort(vector<int>& nums){
        for(int i = 0; i < nums.size() - 1; ++i){
            int j = i + 1;
            while(j > 0 && nums[j] < nums[j - 1]){
                swap(nums[j], nums[j - 1]);
                j--;
            }
        }
    }
    void mergeSort(vector<int>& nums, int l, int r){
        if(l >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);
        vector<int> temp;
        int p = l, q = m + 1;
        while(p <= m && q <= r){
            if(nums[p] < nums[q]) temp.push_back(nums[p++]);
            else temp.push_back(nums[q++]);
        }
        while(p <= m) temp.push_back(nums[p++]);
        while(q <= r) temp.push_back(nums[q++]);
        for(int i = l; i <= r; ++i){
            nums[i] = temp[i - l];
        }
    }
    void quickSort(vector<int>& nums, int l, int r){
        if(l >= r) return;
        int copyL = l, copyR = r;
        int idx = l + rand()%(r - l + 1), key = nums[idx];
        swap(nums[idx], nums[l]);
        while(l < r){
            while(l < r && nums[r] >= key)
                --r;
            nums[l] = nums[r];
            while(l < r && nums[l] <= key)
                ++l;
            nums[r] = nums[l];
        }
        nums[l] = key;
        quickSort(nums, copyL, l - 1);
        quickSort(nums, l + 1, copyR);
    }
    void heapSort(vector<int>& nums){
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto num : nums){
            pq.push(num);
        }
        for(int i = 0; i < nums.size(); ++i){
            nums[i] = pq.top();
            pq.pop();
        }
    }
};