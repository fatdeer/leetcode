func min(x, y int) int {
	if x < y {
		return x
	}
	return y
}

func minPathSum(grid [][]int) int {
    m, n := len(grid), len(grid[0])
	sum := grid[0]
	for i := 1; i < n; i++ {
		sum[i] = sum[i-1] + grid[0][i]
	}

	for i := 1; i < m; i++ {
		sum[0] += grid[i][0]
		for j := 1; j < n; j++ {
			sum[j] = min(sum[j-1], sum[j]) + grid[i][j]
		}
	}
	return sum[n-1]
}