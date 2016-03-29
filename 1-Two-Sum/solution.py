func twoSum(nums []int, target int) []int {
    indexs := make([]int, 2)

	hash := map[int]int{}

	for i := range nums {
		hash[target-nums[i]] = i
	}

	for i := range nums {
		index, ok := hash[nums[i]]
		if !ok {
			continue
		}

		if index == i {
		    continue
		}
		
		if index > i {
		    indexs[0] = i
		    indexs[1] = index
		} else {
		    indexs[0] = index
		    indexs[1] = i
		}
		
		break
	}
	return indexs
}