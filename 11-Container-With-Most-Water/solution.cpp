/*
// Solution #1
#define min(a,b) ((a) > (b) ? (b) : (a))
#define max(a,b) ((a) > (b) ? (a) : (b))

int maxArea(int* height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int res = 0;

    while (left < right) {
        int area = min(height[left], height[right]) * (right - left);
        res = max(res, area);

        if (height[left] <= height[right]) {
            left++;

        } else {
            right--;
        }
    }

    return res;
}
*/
// Solution #2
int maxArea(int* height, int heightSize)
{
    int left = 0, right = heightSize - 1, res = 0, area;

    while (left < right) {
        res = (area = (right - left) * (height[left] < height[right] ? height[left++] : height[right--])) > res ? area : res;
    }

    return res;
}