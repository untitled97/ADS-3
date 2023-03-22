// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0, right = size, middle, num = 0;
    while (left < right) {
        middle = (left + right) / 2;
        if (*(arr + middle) > value) {
            right = middle - 1;
        } else if (*(arr + middle) < value) {
            left = middle + 1;
        } else {
            num++;
            int mid_left = middle - 1, mid_right = middle + 1;
            while ((mid_left >= 0) && (*(arr + mid_left) == value)) {
                num++;
                mid_left--;
            }
            while ((mid_right < size) && (*(arr + mid_right) == value)) {
                num++;
                mid_right++;
            }
            return num;
        }
    }
    return num;
}
