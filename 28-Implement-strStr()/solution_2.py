func strStr(haystack string, needle string) int {
    len_haystack := len(haystack)
	len_needle := len(needle)

	if len_needle == 0 {
		return 0
	}
	i := 0
	j := 0
	k := 0
	for i < len_haystack {
		if len_needle > len_haystack-i {
			return -1
		}

		j = i
		k = 0
		for j < len_haystack && k < len_needle && haystack[j] == needle[k] {
			j++
			k++
		}
		if k == len_needle {
			return i
		}
		i++
	}
	return -1
}