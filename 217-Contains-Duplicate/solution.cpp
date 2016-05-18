func containsDuplicate(nums []int) bool {
    for i := 0; i < len(nums); i++ {
        for v := 0; v < i; v++ {
            if nums[v] == nums[i] {
                return true;
            }
        }
    }
    return false
}