func uniquePaths(m int, n int) int {
    if m > n {
		return uniquePaths(n, m)
	}

	cur := make([]int, m)

	for i := 0; i < m; i++ {
		cur[i] = 1
	}

	for j := 1; j < n; j++ {
		for i := 1; i < m; i++ {
			cur[i] += cur[i-1]
		}
	}
	return cur[m-1]
}