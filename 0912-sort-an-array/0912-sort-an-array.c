void merge(int* nums, int left, int mid, int right) {
    int temp[50000];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (nums[i] < nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = nums[i++];
    }

    while (j <= right) {
        temp[k++] = nums[j++];
    }

    for (i = left; i <= right; i++) {
        nums[i] = temp[i];
    }
}

void mergeSort(int* nums, int left, int right) {
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    mergeSort(nums, 0, numsSize - 1);

    return nums;
}