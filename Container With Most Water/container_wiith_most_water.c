int maxArea(int* height, int heightSize) {
    int maxWater = 0;
    int maxHeight = 0;
    for (int i = 0; i < heightSize; i++) {
        for (int j = i + 1; j < heightSize; j++) {
            maxHeight = (height[i] < height[j]) ? height[i] * (j - i): height[j] * (j - i);
            maxWater = (maxHeight > maxWater) ? maxHeight : maxWater;
        }
    }
    return maxWater;
}